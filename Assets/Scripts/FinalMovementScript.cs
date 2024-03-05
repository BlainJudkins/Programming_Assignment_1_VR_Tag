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
    private float movementSpeed;
    Vector3 smoothMoveVelocity;
    Vector3 moveAmount;
    bool grounded;
    private InputData inputData;
    private Rigidbody myRB;
    private Transform myXRRig;

    private MeshRenderer myRenderer;
    private PlayerClass playerClass;
    private bool vrFlag = false;


    void Start()
    {
        myView = GetComponent<PhotonView>();
        myChild = transform.GetChild(0).gameObject;
        myRenderer = myChild.GetComponent<MeshRenderer>(); // hides the body from the player's POV
        myRB = myChild.GetComponent<Rigidbody>();
        

        GameObject myXrOrigin = GameObject.Find("XR Origin");
     
        myXRRig = myXrOrigin.transform;
        inputData = myXrOrigin.GetComponent<InputData>();

        if (myView.IsMine)
        {
            myXRRig.position = myChild.transform.position;
            myXrOrigin.transform.SetParent(transform.GetChild(0).transform);
            // myRenderer.enabled = false;
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
                vrFlag = true;
                if (inputData.leftController.TryGetFeatureValue(CommonUsages.trigger, out float triggerValue) && triggerValue > 0 && playerClass.teleportCredits > 0)
                {
                    TeleportForward();
                    // vrFlag = true;
                }
            }

            // Check if trigger is pressed on the left controller and player has at least 1 teleport credit
            // else if (inputData.leftController.TryGetFeatureValue(CommonUsages.trigger, out float triggerValue) && triggerValue > 0 && playerClass.teleportCredits > 0)
            // {
            //     TeleportForward();
            //     vrFlag = true;
            // }



            ////////////////////////////////////////////////////////////////////////////////////
            else // PC controls
            {
                // Movement controls
                xInput = Input.GetAxis("Horizontal");
                yInput = Input.GetAxis("Vertical");

                movementSpeed/=2;

                // Rotation controls
                myChild.transform.Rotate(Vector3.up * Input.GetAxis("Mouse X") * 1);
                // myChild.transform.Rotate(Vector3.up * Input.GetAxis("Mouse Y") * 1);
                myXRRig.Rotate((Vector3.up * Input.GetAxis("Mouse X") * 1));
                // myXRRig.Rotate((Vector3.up * Input.GetAxis("Mouse Y") * 1));

                if (Input.GetKeyDown(KeyCode.Space))
                {
                    TeleportForward();
                }
            } 
            ////////////////////////////////////////////////////////////////////////////////////
            


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



            ////////////////////////////////////////////////////////////////////////////////////
            if (!vrFlag)
            {
                // myRB.AddForce(xInput * movementSpeed, 0, zInput * movementSpeed);
                myRB.MoveRotation(myChild.transform.rotation);
            }
            ////////////////////////////////////////////////////////////////////////////////////
        }
    }

    // Teleport the player forward
    private void TeleportForward()
    {
        Vector3 newPosition = transform.position + transform.forward * 1f; // Teleport 1 m in forward direction
        myRB.MovePosition(newPosition);
        playerClass.teleportCredits--; // Deduct one teleport credit
    }
}







// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using UnityEngine.XR;
// using Photon.Pun;

// public class FinalMovementScript : MonoBehaviour
// {
//     private PhotonView myView;
//     private GameObject myChild;

//     private float xInput;
//     private float yInput;
//     // private float movementSpeed = 10.0f;
//     private float movementSpeed;

//     Vector3 smoothMoveVelocity;
//     Vector3 moveAmount;
//     bool grounded;
//     private InputData inputData;
//     private Rigidbody myRB;
//     private Transform myXRRig;

//     private MeshRenderer myRenderer;
//     private PlayerClass playerClass;

//     // Start is called before the first frame update
//     void Start()
//     {
//         myView = GetComponent<PhotonView>();
//         myChild = transform.GetChild(0).gameObject;
//         // myRenderer = myChild.GetComponent<MeshRenderer>(); // hides the body from the player's POV
//         myRB = myChild.GetComponent<Rigidbody>();
        

//         GameObject myXrOrigin = GameObject.Find("XR Origin");
     
//         myXRRig = myXrOrigin.transform;
//         inputData = myXrOrigin.GetComponent<InputData>();

//         if (myView.IsMine)
//         {
//             myXRRig.position = myChild.transform.position;
//             myXrOrigin.transform.SetParent(transform.GetChild(0).transform);
//             playerClass = GetComponent<PlayerClass>(); // Get the PlayerClass component
//             movementSpeed = playerClass.speed; // set the movement speed to player's default movement speed, which is 10f
//         }
//     }

//     // Update is called once per frame
//     void Update()
//     {
//         if (myView.IsMine)
//         {
//             movementSpeed = playerClass.speed; // should update if player's speed ever changes
//             myXRRig.position = myChild.transform.position;

//             if (inputData.rightController.TryGetFeatureValue(CommonUsages.primary2DAxis, out Vector2 movement))
//             {
//                 xInput = movement.x;
//                 yInput = movement.y;
//             }

//             // Check if trigger is pressed on the left controller and player has at least 1 teleport credit
//             if (inputData.leftController.TryGetFeatureValue(CommonUsages.trigger, out float triggerValue) && triggerValue > 0 && playerClass.teleportCredits > 0)
//             {
//                 TeleportForward();
//             }

//             Vector3 moveDir = new Vector3(xInput, 0, yInput).normalized;
//             Vector3 targetMoveAmount = moveDir * movementSpeed;
//             moveAmount = Vector3.SmoothDamp(moveAmount, targetMoveAmount, ref smoothMoveVelocity, .15f);
//         }
//     }

//     private void FixedUpdate()
//     {
//         if (myView.IsMine)
//         {
//             Vector3 localMove = myXRRig.GetChild(0).transform.GetChild(0).transform.rotation * transform.TransformDirection(moveAmount) * Time.fixedDeltaTime;
//             myRB.MovePosition(myRB.position + localMove);
//         }
//     }

//     // Teleport the player forward
//     private void TeleportForward()
//     {
//         Vector3 newPosition = transform.position + transform.forward * 1f; // Teleport 1 m in forward direction
//         myRB.MovePosition(newPosition);
//         playerClass.teleportCredits--; // Deduct one teleport credit
//     }
// }
