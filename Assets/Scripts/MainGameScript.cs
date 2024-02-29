using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainGameScript : MonoBehaviour    // assogm to an empty game object in the scene
{
    public List<Player> players = new List<Player>();
  
    public class Player
    {
        public int playerID; 
        public int numLives = 3;     
        public int teleportCredits = 0; 
        public float speed = 10.0f; 
        public bool isChaser;
        public GameObject playerBody;

        // Constructor to initialize player attributes
        public Player(int playerID, bool isChaser, GameObject playerBody)
        {
            this.playerID = playerID;
            this.isChaser = isChaser;
            this.playerBody = playerBody;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
