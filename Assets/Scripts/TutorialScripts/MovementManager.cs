using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using Photon.Pun;

public class MovementManager : MonoBehaviour
{
    private PhotonView myView;
    private GameObject myChild;


    private float xInput;
    private float yInput;
    private float movementSpeed = 10.0f;

    private InputData inputData;
    // [SerializeField] private GameObject myObjectToMove;
    private Rigidbody myRB;
    private Transform myXRRig;


    ///////////////////////////////////////////////
    public Transform headTransform;
    public float moveSpeed = 3f;
    public OVRInput.Button crouchButton;
    public OVRInput.Button jumpButton;
    public OVRInput.Button turnLeftButton;
    public OVRInput.Button turnRightButton;
    public float turnAngle = 30f;
    private Vector3 moveDirection;
    ///////////////////////////////////////////////


    // Start is called before the first frame update
    void Start()
    {
        myView = GetComponent<PhotonView>();

        // myChild = transform.GetChild(0).gameObject;
        // myRB = myChild.GetComponent<Rigidbody>();
        
        // GameObject myXrOrigin = GameObject.Find("XR Origin");
        // myXRRig = myXrOrigin.transform;
        // inputData = myXrOrigin.GetComponent<InputData>();
    }

    // Update is called once per frame
    void Update()
    {
        if (myView.IsMine)
        {
            // myXRRig.position = myChild.transform.position;
            // if (inputData.rightController.TryGetFeatureValue(CommonUsages.primary2DAxis, out Vector2 movement))
            // {
            //     xInput = movement.x;
            //     yInput = movement.y;
            // }

            ///////////////////////////////////////////////
            HandleMovement();
            ///////////////////////////////////////////////
        }
    }

    // private void FixedUpdate()
    // {
    //     myRB.AddForce(xInput * movementSpeed, 0, yInput * movementSpeed);
    // }

    void HandleMovement()
    {
        // Get the input from the thumbstick
        float horizontalInput = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick).x;
        float verticalInput = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick).y;

        // Get the forward and right directions based on the current rotation of the headTransform
        Vector3 forward = Vector3.ProjectOnPlane(headTransform.forward, Vector3.up).normalized;
        Vector3 right = Vector3.ProjectOnPlane(headTransform.right, Vector3.up).normalized;

        // Calculate the movement direction using the forward and right directions
        Vector3 move = right * horizontalInput + forward * verticalInput;

        // Normalize the movement vector to ensure consistent speed regardless of direction
        if (move.magnitude > 1f)
        {
            move.Normalize();
        }

        // Apply the movement speed to the direction
        moveDirection = move * moveSpeed;
    }
}
