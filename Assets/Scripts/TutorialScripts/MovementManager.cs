using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using Photon.Pun;

public class MovementManager : MonoBehaviour
{
    private PhotonView myView;
    private GameObject myChild;

    private InputData inputData;
    private Rigidbody myRB;
    private Transform myXRRig;

    public Transform headTransform;
    public float moveSpeed = 3f;
    public OVRInput.Button crouchButton;
    public OVRInput.Button jumpButton;
    public OVRInput.Button turnLeftButton;
    public OVRInput.Button turnRightButton;
    public float turnAngle = 30f;
    private Vector3 moveDirection;

    private void Start()
    {
        myView = GetComponent<PhotonView>();
        myChild = transform.GetChild(0).gameObject;
        myRB = myChild.GetComponent<Rigidbody>();

        GameObject myXrOrigin = GameObject.Find("XR Origin");
        myXRRig = myXrOrigin.transform;
        inputData = myXrOrigin.GetComponent<InputData>();
    }

    private void Update()
    {
        if (myView.IsMine)
        {
            if (inputData.rightController.TryGetFeatureValue(CommonUsages.primary2DAxis, out Vector2 movement))
            {
                HandleMovement(movement.x, movement.y);
            }
        }
    }

    private void FixedUpdate()
    {
        if (myView.IsMine)
        {
            myRB.velocity = moveDirection * moveSpeed;
        }
    }

    private void HandleMovement(float horizontalInput, float verticalInput)
    {
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

        // Perform raycast to detect the ground beneath the character
        RaycastHit hit;
        if (Physics.Raycast(transform.position, -transform.up, out hit, Mathf.Infinity))
        {
            // Calculate the direction towards the hit point
            Vector3 hitDirection = hit.point - transform.position;

            // Project the movement vector onto the plane defined by the hit normal
            move = Vector3.ProjectOnPlane(move, hit.normal).normalized;

            // Rotate the movement vector towards the hit direction
            move = Vector3.RotateTowards(move, hitDirection, turnAngle * Mathf.Deg2Rad, 1);
        }

        // Apply the movement speed to the direction
        moveDirection = move;
    }
}






// movement in forward direction of head, but can't cross equator

// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using UnityEngine.XR;
// using Photon.Pun;

// public class MovementManager : MonoBehaviour
// {
//     private PhotonView myView;
//     private GameObject myChild;

//     private InputData inputData;
//     private Rigidbody myRB;
//     private Transform myXRRig;

//     public Transform headTransform;
//     public float moveSpeed = 50.0f;
//     public OVRInput.Button crouchButton;
//     public OVRInput.Button jumpButton;
//     public OVRInput.Button turnLeftButton;
//     public OVRInput.Button turnRightButton;
//     public float turnAngle = 30f;
//     private Vector3 moveDirection;

//     private void Start()
//     {
//         myView = GetComponent<PhotonView>();
//         myChild = transform.GetChild(0).gameObject;
//         myRB = GetComponent<Rigidbody>();

//         GameObject myXrOrigin = GameObject.Find("XR Origin");
//         myXRRig = myXrOrigin.transform;
//         inputData = myXrOrigin.GetComponent<InputData>();
//     }

//     private void Update()
//     {
//         if (myView.IsMine)
//         {
//             if (inputData.rightController.TryGetFeatureValue(CommonUsages.primary2DAxis, out Vector2 movement))
//             {
//                 HandleMovement(movement.x, movement.y);
//             }
//         }
//     }

//     // private void FixedUpdate() // also weird at equator
//     // {
//     //     if (myView.IsMine)
//     //     {
//     //         // Move the character (OVRCameraRig)
//     //         transform.position += moveDirection * moveSpeed * Time.fixedDeltaTime;
//     //     }
//     // }
//     private void FixedUpdate() // works for speed but weird at equator
//     {
//         if (myView.IsMine)
//         {
//             // Move the character (OVRCameraRig)
//             myRB.velocity = moveDirection * moveSpeed;
//         }
//     }



//     private void HandleMovement(float horizontalInput, float verticalInput)
//     {
//         // Get the forward and right directions based on the current rotation of the headTransform
//         Vector3 forward = Vector3.ProjectOnPlane(headTransform.forward, Vector3.up).normalized;
//         Vector3 right = Vector3.ProjectOnPlane(headTransform.right, Vector3.up).normalized;

//         // Calculate the movement direction using the forward and right directions
//         Vector3 move = right * horizontalInput + forward * verticalInput;

//         // Normalize the movement vector to ensure consistent speed regardless of direction
//         if (move.magnitude > 1f)
//         {
//             move.Normalize();
//         }

//         // Perform raycast to detect the ground beneath the character
//         RaycastHit hit;
//         if (Physics.Raycast(transform.position, -transform.up, out hit, Mathf.Infinity))
//         {
//             // Calculate the direction towards the hit point
//             Vector3 hitDirection = hit.point - transform.position;

//             // Project the movement vector onto the plane defined by the hit normal
//             move = Vector3.ProjectOnPlane(move, hit.normal).normalized;

//             // Rotate the movement vector towards the hit direction
//             move = Vector3.RotateTowards(move, hitDirection, turnAngle * Mathf.Deg2Rad, 1);
//         }

//         // Apply the movement speed to the direction
//         moveDirection = move;
//     }

// }




////////////////

// movement but does not turn with users head rotation
// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using UnityEngine.XR;
// using Photon.Pun;

// public class MovementManager : MonoBehaviour
// {
//     private PhotonView myView;
//     private GameObject myChild;


//     private float xInput;
//     private float yInput;
//     private float movementSpeed = 5.0f;

//     private InputData inputData;
//     // [SerializeField] private GameObject myObjectToMove;
//     private Rigidbody myRB;
//     private Transform myXRRig;



//     /////////////////////////////////////////////// 
//     public Transform headTransform;
//     public float moveSpeed = 3f;
//     public OVRInput.Button crouchButton;
//     public OVRInput.Button jumpButton;
//     public OVRInput.Button turnLeftButton;
//     public OVRInput.Button turnRightButton;
//     public float turnAngle = 30f;
//     private Vector3 moveDirection;
//     ///////////////////////////////////////////////


//     // Start is called before the first frame update
//     void Start()
//     {
//         myView = GetComponent<PhotonView>();

//         myChild = transform.GetChild(0).gameObject;
//         Debug.Log("WHO IS MY CHILD: " + myChild);
//         myRB = myChild.GetComponent<Rigidbody>();
        
//         GameObject myXrOrigin = GameObject.Find("XR Origin");
//         myXRRig = myXrOrigin.transform;
//         inputData = myXrOrigin.GetComponent<InputData>();
//     }

//     // Update is called once per frame
//     void Update()
//     {
//         if (myView.IsMine)
//         {
//             // myXRRig.position = myChild.transform.position;
//             // myXRRig.rotation = myChild.transform.rotation;

//             if (inputData.rightController.TryGetFeatureValue(CommonUsages.primary2DAxis, out Vector2 movement))
//             {
//                 xInput = movement.x;
//                 yInput = movement.y;
//             }

//             ///////////////////////////////////////////////
//             // HandleMovement();
//             ///////////////////////////////////////////////
//         }
//     }

//     private void FixedUpdate()
//     {
//         // myRB.AddForce(xInput * movementSpeed, 0, yInput * movementSpeed);
//         if (myView.IsMine)
//         {
//             // Move the character (OVRCameraRig)
//             transform.position += transform.forward * yInput * movementSpeed * Time.fixedDeltaTime;
//             transform.position += transform.right * xInput * movementSpeed * Time.fixedDeltaTime;
//         }
//     }
    


//     // void HandleMovement()
//     // {
//     //     // Get the input from the thumbstick
//     //     float horizontalInput = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick).x;
//     //     float verticalInput = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick).y;

//     //     // Get the forward and right directions based on the current rotation of the headTransform
//     //     Vector3 forward = Vector3.ProjectOnPlane(headTransform.forward, Vector3.up).normalized;
//     //     Vector3 right = Vector3.ProjectOnPlane(headTransform.right, Vector3.up).normalized;

//     //     // Calculate the movement direction using the forward and right directions
//     //     Vector3 move = right * horizontalInput + forward * verticalInput;

//     //     // Normalize the movement vector to ensure consistent speed regardless of direction
//     //     if (move.magnitude > 1f)
//     //     {
//     //         move.Normalize();
//     //     }

//     //     // Apply the movement speed to the direction
//     //     moveDirection = move * moveSpeed;
//     // }
// }
