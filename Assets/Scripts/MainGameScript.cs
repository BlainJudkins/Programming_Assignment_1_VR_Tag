using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainGameScript : MonoBehaviour    // assogm to an empty game object in the scene
{
    public List<PlayerClass> players = new List<PlayerClass>();
    [SerializeField] private GameObject firstPlayer;
    PlayerClass player1;
  

    // Update is called once per frame
    
    void Start()
    {
        player1 = firstPlayer.GetComponent<PlayerClass>();
        player1.playerID = 0;
        player1.isChaser = true;
        player1.playerBody = firstPlayer;
        players.Add(player1);

        // Debug.Log("starting");
    }
    



    void Update()
    {

        // indicator for who is chaser
        for (int i = 0; i < players.Count; i++) 
        {
            GameObject body = players[i].playerBody.transform.GetChild(0).gameObject;
            Renderer renderer = body.GetComponent<Renderer>();
            if (players[i].isChaser)
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



    // in theory, this should handle the tag functionality, but we can't check because we can't save the attributes of other players!
    void newChaser(PlayerClass prevChaser, PlayerClass newChaser)
    {
        prevChaser.isChaser = false;
        newChaser.isChaser = true;
        newChaser.numLives = newChaser.numLives - 1;
    }
    
    void OnCollisionEnter(Collision collision)
    {
        // Check if both colliding objects are players
        PlayerClass prevChaser = null;
        PlayerClass newChaserPlayer = null; // Renaming to avoid conflict

        for (int i = 0; i < players.Count; i++) 
        {
            if (collision.gameObject == players[i].playerBody)
            {
                if (players[i].isChaser)
                {
                    prevChaser = players[i];
                }
                else
                {
                    newChaserPlayer = players[i]; // Renamed variable
                }
            }
        }

        // If both previous chaser and new chaser are found, change their statuses
        if (prevChaser != null && newChaserPlayer != null)
        {
            newChaser(prevChaser, newChaserPlayer); // Call to newChaser method
        }
    }
}
