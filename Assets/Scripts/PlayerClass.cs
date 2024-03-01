using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerClass : MonoBehaviour
{
    public int playerID; 
    public int numLives = 3;     
    public int teleportCredits = 0; 
    public float speed = 10.0f; 
    public bool isChaser;
    public GameObject playerBody;

    // Constructor to initialize player attributes
    public PlayerClass(int playerID, bool isChaser, GameObject playerBody)
    {
        this.playerID = playerID;
        this.isChaser = isChaser;
        this.playerBody = playerBody;
    }

    void Update()
    {

        Renderer renderer = GetComponent<Renderer>();
        if (isChaser)
        {
            // Debug.Log("player " + i.ToString() + " is chaser");
            renderer.material.color = Color.red;
        }
        else
        {
            renderer.material.color = Color.blue;
        }
        
    }
}
