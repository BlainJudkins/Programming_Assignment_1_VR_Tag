using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class dummyScript : MonoBehaviour
{
    public int playerID; 
    public int numLives = 3;     
    public int teleportCredits = 0; 
    public float speed = 10.0f; 
    GameObject playerBody;
    Renderer renderer;
    public bool isChaser;
    private bool timerRunning = false;
    private float timerDuration = 120f; // 2 minute in seconds
    // private float timerDuration = 5f;

    public void ChangeColorToRed()
    {
        renderer.material.color = Color.red; // Set color to red
    }

    public void ChangeColorToBlue()
    {
        renderer.material.color = Color.cyan; // Set color to blue
    }

    // Method to initialize player attributes
    public void InitializePlayer(int playerID, bool isChaser, GameObject playerBody, Renderer renderer)
    {
        this.isChaser = isChaser;
        this.playerID = playerID;
        this.playerBody = playerBody;
        this.renderer = renderer;
        if (isChaser)
        {
            ChangeColorToRed();
            // Start the timer if the dummy is a chaser
            StartTimer();
        }
        else
        {
            ChangeColorToBlue();
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
        // When the timer runs out, subtract a life from the dummy
        numLives--;
        Debug.Log("Took too long to catch a player! -1 life. Lives left = " + numLives + " for " + playerID);
        // If still chaser, restart the timer
        if (isChaser)
        {
            timerRunning = false; // Reset the flag before restarting
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

    void Update()
    {
        renderer = transform.GetChild(0).GetComponent<Renderer>();
        if (isChaser)
        {
            ChangeColorToRed();
        }
        else
        {
            ChangeColorToBlue();
        }


        if (numLives <= 0)
        {
            Debug.Log("Dummy " + playerID + " lost the game!");
            SceneManager.LoadScene(1);
        }
    }
}



// using System.Collections;
// using System.Collections.Generic;
// using ExitGames.Client.Photon.StructWrapping;
// using UnityEngine;

// public class dummyScript : MonoBehaviour
// {
//     public int playerID; 
//     public int numLives = 3;     
//     public int teleportCredits = 0; 
//     public float speed = 10.0f; 
//     GameObject playerBody;
//     Renderer renderer;
//     public bool isChaser;
    

//     public void ChangeColorToRed()
//     {
//         renderer.material.color = Color.red; // Set color to red
//     }

//     public void ChangeColorToBlue()
//     {
//         renderer.material.color = Color.blue; // Set color to blue
//     }

//     // Method to initialize player attributes
//     public void InitializePlayer(int playerID, bool isChaser, GameObject playerBody, Renderer renderer)
//     {
//         this.isChaser = isChaser;
//         this.playerID = playerID;
//         this.playerBody = playerBody;
//         this.renderer = renderer;
//         if (isChaser)
//         {
//             ChangeColorToRed();
//         }
//         else
//         {
//             ChangeColorToBlue();
//         }
//     }

//     void Update()
//     {

//         renderer = transform.GetChild(0).GetComponent<Renderer>();
//         if (isChaser)
//         {
//             ChangeColorToRed();
//         }
//         else
//         {
//             ChangeColorToBlue();
//         }
        
//     }





// }
