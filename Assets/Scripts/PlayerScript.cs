using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerScript : MonoBehaviour
{
    public CharacterController characterController;
    public Transform headTransform;
    public float moveSpeed = 3f;



    // public float gravity = 9.81f;
    private GravityController GravityControllerScript;


    public OVRInput.Button crouchButton;
    public OVRInput.Button jumpButton;
    public OVRInput.Button turnLeftButton;
    public OVRInput.Button turnRightButton;
    public float turnAngle = 30f;

    private Vector3 moveDirection;

    void Start()
    {
        characterController = GetComponent<CharacterController>();
        GravityControllerScript = GetComponent<GravityController>();
    }



    void Update()
    {
        HandleMovement();
    }

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

        // Apply gravity
        // Debug.Log(GravityControllerScript.Gravity.Gravity);
        moveDirection.y -= GravityControllerScript.Gravity.Gravity * Time.deltaTime * 50; 

        // Move the character controller
        characterController.Move(moveDirection * Time.deltaTime);
    }

}
