using Photon.Pun;
using UnityEngine;

public class PlayerClass : MonoBehaviourPunCallbacks
{
    public int playerID; 
    public int numLives = 3;     
    public int teleportCredits = 0; 
    public float speed = 10.0f; 
    public Renderer renderer; // Reference to the Renderer component
    GameObject playerBody;

    [PunRPC]
    public void ChangeColorToRed()
    {
        renderer.material.color = Color.red; // Set color to red
    }

    [PunRPC]
    public void ChangeColorToBlue()
    {
        renderer.material.color = Color.blue; // Set color to blue
    }

    // Method to initialize player attributes
    public void InitializePlayer(int playerID, bool isChaser, GameObject playerBody, Renderer renderer)
    {
        this.playerID = playerID;
        this.playerBody = playerBody;
        this.renderer = renderer;
        if (isChaser)
        {
            photonView.RPC("ChangeColorToRed", RpcTarget.AllBuffered); // Set chaser color to red for all players
            // GetComponent<PhotonView>().RPC("setChangeColorToRedColor", RpcTarget.AllBuffered);
        }
        else
        {
             photonView.RPC("ChangeColorToBlue", RpcTarget.AllBuffered); 
            // GetComponent<PhotonView>().RPC("ChangeColorToBlue", RpcTarget.AllBuffered);// Set non-chaser color to blue for all players
        }
    }
}






// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using Photon.Pun;


// public class PlayerClass : MonoBehaviourPunCallbacks
// {
//     public int playerID; 
//     public int numLives = 3;     
//     public int teleportCredits = 0; 
//     public float speed = 10.0f; 
//     [PunRPC] public bool isChaser;
//     public GameObject playerBody;
//     [PunRPC] Renderer renderer;

//     // Constructor to initialize player attributes
//     public PlayerClass(int playerID, bool isChaser, GameObject playerBody)
//     {
//         this.playerID = playerID;
//         this.isChaser = isChaser;
//         this.playerBody = playerBody;
//     }

//     void Update()
//     {

//         renderer = transform.GetChild(0).GetComponent<Renderer>();
//         if (isChaser)
//         {
//             // Debug.Log("player " + i.ToString() + " is chaser");
//             renderer.material.color = Color.red;
//         }
//         else
//         {
//             renderer.material.color = Color.blue;
//         }
        
//     }
// }
