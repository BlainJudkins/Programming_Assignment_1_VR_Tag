using Photon.Pun;
using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;


public class PlayerClass : MonoBehaviourPunCallbacks
{
    public int playerID; 
    public int numLives = 3;     
    public int teleportCredits = 0; 
    public float speed = 10.0f; 
    public Renderer renderer; // Reference to the Renderer component
    GameObject playerBody;
    public bool isChaser;
    private bool timerRunning = false;
    private float timerDuration = 60f; // 1 minute in seconds    /// 2 minutes is too long for how relatively small the world is
    // private float timerDuration = 5f;

    void Start()
    {
        // Initialize numLives to 3 only if it's 0 /// fixes something weird that happens when spawning player
        if (numLives == 0)
        {
            numLives = 3;
        }
        Debug.Log("lives = " + numLives);
    }

    

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
        this.isChaser = isChaser;
        this.playerBody = playerBody;
        this.renderer = renderer;
        if (isChaser)
        {
            photonView.RPC("ChangeColorToRed", RpcTarget.AllBuffered); // Set chaser color to red for all players
            // Start the timer if the player is a chaser
            StartTimer();
        }
        else
        {
             photonView.RPC("ChangeColorToBlue", RpcTarget.AllBuffered); 
            // GetComponent<PhotonView>().RPC("ChangeColorToBlue", RpcTarget.AllBuffered);// Set non-chaser color to blue for all players
        }
    }

    // Coroutine for the timer
    private IEnumerator TimerCoroutine()
    {
        timerRunning = true;
        float timer = timerDuration;
        while (timer > 0)
        {
            yield return new WaitForSeconds(1f);
            timer--;
        }
        // When the timer runs out, subtract a life from the player
        numLives--;
        Debug.Log("Took too long to catch a player! -1 life. Lives left = " + numLives + " for " + playerID);
        // If still chaser, restart the timer
        if (isChaser)
        {
            timerRunning = false; 
            StartTimer();
        }
    }

    // Method to start the timer
    private void StartTimer()
    {
        if (!timerRunning)
        {
            StartCoroutine(TimerCoroutine());
        }
    }

    // Method to stop the timer
    private void StopTimer()
    {
        timerRunning = false;
        StopCoroutine(TimerCoroutine());
    }

    ////////////////////// DUMMY PLAYER STUFF vvvvv  (this might not synchronize)
    [PunRPC]
    void Update()
    {
        renderer = transform.GetChild(0).GetComponent<Renderer>();
        if (isChaser)
        {
            renderer.material.color = Color.red;
            // Do chaser-related logic here
        }
        else
        {
            renderer.material.color = Color.blue;
            // Do non-chaser-related logic here
        }




        if (numLives <= 0)
        {
            SceneManager.LoadScene(1);
        }
    }
}



// // using System.Collections;
// // using System.Collections.Generic;
// // using ExitGames.Client.Photon.StructWrapping;
// // using UnityEngine;

// // public class PlayerClass : MonoBehaviour
// // {
// //     public int playerID; 
// //     public int numLives = 3;     
// //     public int teleportCredits = 0; 
// //     public float speed = 10.0f; 
// //     GameObject playerBody;
// //     Renderer renderer;
// //     public bool isChaser;

// //     public void ChangeColorToRed()
// //     {
// //         renderer.material.color = Color.red; // Set color to red
// //     }

// //     public void ChangeColorToBlue()
// //     {
// //         renderer.material.color = Color.blue; // Set color to blue
// //     }

// //     // Method to initialize player attributes
// //     public void InitializePlayer(int playerID, bool isChaser, GameObject playerBody, Renderer renderer)
// //     {
// //         this.isChaser = isChaser;
// //         this.playerID = playerID;
// //         this.playerBody = playerBody;
// //         this.renderer = renderer;
// //         if (isChaser)
// //         {
// //             ChangeColorToRed();
// //         }
// //         else
// //         {
// //             ChangeColorToBlue();
// //         }
// //     }

// //     void Update()
// //     {

// //         renderer = transform.GetChild(0).GetComponent<Renderer>();
// //         if (isChaser)
// //         {
// //             ChangeColorToRed();
// //         }
// //         else
// //         {
// //             ChangeColorToBlue();
// //         }
        
// //     }





// //     /////// CATCHING LOGISTICS 

// // }





// // BELOW IS MULTIPLAYER FUNCTIONALITY


// using Photon.Pun;
// using UnityEngine;

// public class PlayerClass : MonoBehaviourPunCallbacks
// {
//     public int playerID; 
//     public int numLives = 3;     
//     public int teleportCredits = 0; 
//     public float speed = 10.0f; 
//     public Renderer renderer; // Reference to the Renderer component
//     GameObject playerBody;
//     public bool isChaser;

//     [PunRPC]
//     public void ChangeColorToRed()
//     {
//         renderer.material.color = Color.red; // Set color to red
//     }

//     [PunRPC]
//     public void ChangeColorToBlue()
//     {
//         renderer.material.color = Color.blue; // Set color to blue
//     }

//     // Method to initialize player attributes
//     public void InitializePlayer(int playerID, bool isChaser, GameObject playerBody, Renderer renderer)
//     {
//         this.playerID = playerID;
//         this.isChaser = isChaser;
//         this.playerBody = playerBody;
//         this.renderer = renderer;
//         if (isChaser)
//         {
//             photonView.RPC("ChangeColorToRed", RpcTarget.AllBuffered); // Set chaser color to red for all players
//             // GetComponent<PhotonView>().RPC("setChangeColorToRedColor", RpcTarget.AllBuffered);
//         }
//         else
//         {
//              photonView.RPC("ChangeColorToBlue", RpcTarget.AllBuffered); 
//             // GetComponent<PhotonView>().RPC("ChangeColorToBlue", RpcTarget.AllBuffered);// Set non-chaser color to blue for all players
//         }
//     }





//     ////////////////////// DUMMY PLAYER STUFF vvvvv  (this might not synchronize)
//     [PunRPC]
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


//         if (isChaser)
//         {
            
//         }



        
//     }





// }




