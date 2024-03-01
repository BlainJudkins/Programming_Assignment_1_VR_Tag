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
    private float movementSpeed = 10.0f;

    Vector3 smoothMoveVelocity;
    public LayerMask groundedMask;
    Vector3 moveAmount;
    bool grounded;
    private InputData inputData;
    //[SerializeField] private GameObject myObjectToMove;
    private Rigidbody myRB;
    private Transform myXRRig;

     private MeshRenderer myRenderer;
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
         if(myView.IsMine){

            // myRenderer.enabled = false; // !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! determines if player sees their own body
            myXRRig.position = myChild.transform.position;
            myXrOrigin.transform.SetParent(transform.GetChild(0).transform);

         }

    }

    // Update is called once per frame
    void Update()
    {
        if(myView.IsMine){

        

        
        myXRRig.position = myChild.transform.position;
       // myXRRig.rotation = myChild.transform.rotation;
    

        if(inputData.rightController.TryGetFeatureValue(CommonUsages.primary2DAxis, out Vector2 movement)){
            xInput= movement.x;
            yInput= movement.y;
      
            // usingVR = true;
            
         }


        Vector3 moveDir = new Vector3(xInput,0, yInput).normalized;
	    Vector3 targetMoveAmount = moveDir * movementSpeed;
		moveAmount = Vector3.SmoothDamp(moveAmount,targetMoveAmount,ref smoothMoveVelocity,.15f);
    
    }
    }

     private void FixedUpdate(){

     if(myView.IsMine){

       Vector3 localMove = myXRRig.GetChild(0).transform.GetChild(0).transform.rotation * transform.TransformDirection(moveAmount) * Time.fixedDeltaTime;
	   myRB.MovePosition(myRB.position + localMove);

         }
       

    }

}
