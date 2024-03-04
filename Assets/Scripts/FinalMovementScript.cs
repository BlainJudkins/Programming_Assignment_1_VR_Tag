using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using Photon.Pun;

public class FinalMovementScript : MonoBehaviour
{
    private PhotonView myView;
    private GameObject myChild;

    private float xInput;
    private float yInput;
    // private float movementSpeed = 10.0f;
    private float movementSpeed;

    Vector3 smoothMoveVelocity;
    public LayerMask groundedMask;
    Vector3 moveAmount;
    bool grounded;
    private InputData inputData;
    //[SerializeField] private GameObject myObjectToMove;
    private Rigidbody myRB;
    private Transform myXRRig;

    private MeshRenderer myRenderer;
    private PlayerClass playerClass;

    // Start is called before the first frame update
    void Start()
    {
        myView = GetComponent<PhotonView>();
        myChild = transform.GetChild(0).gameObject;
        myRenderer = myChild.GetComponent<MeshRenderer>(); // hides the body from the player's POV
        myRB = myChild.GetComponent<Rigidbody>();
        

        GameObject myXrOrigin = GameObject.Find("XR Origin");
        Cursor.lockState = CursorLockMode.Locked;
        myXRRig = myXrOrigin.transform;
        inputData = myXrOrigin.GetComponent<InputData>();

        if (myView.IsMine)
        {
            myXRRig.position = myChild.transform.position;
            myXrOrigin.transform.SetParent(transform.GetChild(0).transform);
            playerClass = GetComponent<PlayerClass>(); // Get the PlayerClass component
            movementSpeed = playerClass.speed; // set the movement speed to player's default movement speed, which is 10f
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (myView.IsMine)
        {
            movementSpeed = playerClass.speed; // should update if player's speed ever changes
            myXRRig.position = myChild.transform.position;

            if (inputData.rightController.TryGetFeatureValue(CommonUsages.primary2DAxis, out Vector2 movement))
            {
                xInput = movement.x;
                yInput = movement.y;
            }

            // Check if trigger is pressed on the left controller and player has at least 1 teleport credit
            if (inputData.leftController.TryGetFeatureValue(CommonUsages.trigger, out float triggerValue) && triggerValue > 0 && playerClass.teleportCredits > 0)
            {
                TeleportForward();
            }

            Vector3 moveDir = new Vector3(xInput, 0, yInput).normalized;
            Vector3 targetMoveAmount = moveDir * movementSpeed;
            moveAmount = Vector3.SmoothDamp(moveAmount, targetMoveAmount, ref smoothMoveVelocity, .15f);
        }
    }

    private void FixedUpdate()
    {
        if (myView.IsMine)
        {
            Vector3 localMove = myXRRig.GetChild(0).transform.GetChild(0).transform.rotation * transform.TransformDirection(moveAmount) * Time.fixedDeltaTime;
            myRB.MovePosition(myRB.position + localMove);
        }
    }

    // Teleport the player forward
    private void TeleportForward()
    {
        Vector3 newPosition = transform.position + transform.forward * 3f; // Teleport 3 m in forward direction
        myRB.MovePosition(newPosition);
        playerClass.teleportCredits--; // Deduct one teleport credit
    }
}
