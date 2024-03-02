using System.Collections;
using System.Collections.Generic;
using Photon.Realtime;
using UnityEngine;

public class MainGameScript : MonoBehaviour    // assogm to an empty game object in the scene
{
    // public List<PlayerClass> players = new List<PlayerClass>();
    public List<GameObject> players = new List<GameObject>();
    [SerializeField] private GameObject firstPlayer;
    PlayerClass player1;
    [SerializeField] public List<GameObject> spawnPoints = new List<GameObject>();
    [SerializeField] GameObject dummyPlayer;
    int randomRespawnNumber = 0;
    public int numPlayers = 0;
    

    bool flagNumPlayers = false; // flag for spawning set of dummy players ONCE AFTER the first actual player has entered the game
  

    // Update is called once per frame
    
    void Start()
    {

        // **TO TURN MULTIPLAYER BACK ON**
        // - In PlayerClass script, flip the commented out code sections
        // - Enable NetworkManager in Unity Hierarchy
        // - In MainGameScript, comment out spawnFirstPlayer() in Update()
        

        // spawnFirstPlayer(); // comment out this function to turn multiplayer back on!!!!!!! (really just so that this script does not spawn the player)
        
    }

    





     ////////////////////// DUMMY PLAYER STUFF vvvvv
    void spawnFirstPlayer() 
    {
        randomRespawnNumber = Random.Range(0, 6);
        // Debug.Log("random Number: " + randomRespawnNumber);
        GameObject player1;

        player1 = Instantiate(firstPlayer, spawnPoints[randomRespawnNumber].transform.position, spawnPoints[randomRespawnNumber].transform.rotation);
        player1.GetComponent<PlayerClass>().InitializePlayer(numPlayers, true, player1, player1.transform.GetChild(0).GetComponent<Renderer>());
        numPlayers++;
    }

    void spawnDummyPlayer()
    {
        randomRespawnNumber = Random.Range(0, 6);
        // Debug.Log("random Number: " + randomRespawnNumber);
        GameObject dummyPlayerObject;

        dummyPlayerObject = Instantiate(dummyPlayer, spawnPoints[randomRespawnNumber].transform.position, spawnPoints[randomRespawnNumber].transform.rotation);
        dummyPlayerObject.GetComponent<dummyScript>().InitializePlayer(numPlayers, false, dummyPlayerObject, dummyPlayerObject.transform.GetChild(0).GetComponent<Renderer>());
        numPlayers++;
    }
    
     ////////////////////// DUMMY PLAYER STUFF ^^^^^^^


    void Update()
    {
        ////////////////////// DUMMY PLAYER STUFF vvvvv
        if (numPlayers > 0 && flagNumPlayers == false) // spawn 3 dummies after player joined game
        {
            flagNumPlayers = true;
            spawnDummyPlayer();
            spawnDummyPlayer();
            spawnDummyPlayer();
        }
         ////////////////////// DUMMY PLAYER STUFF ^^^^^
        
    }



}
