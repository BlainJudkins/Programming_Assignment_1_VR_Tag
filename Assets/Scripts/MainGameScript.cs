using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainGameScript : MonoBehaviour    // assogm to an empty game object in the scene
{
    // public List<PlayerClass> players = new List<PlayerClass>();
    public List<GameObject> players = new List<GameObject>();
    [SerializeField] private GameObject firstPlayer;
    PlayerClass player1;
    [SerializeField] List<GameObject> spawnPoints = new List<GameObject>();
    [SerializeField] GameObject dummyPlayer;
    int randomRespawnNumber = 0;
    
  

    // Update is called once per frame
    
    void Start()
    {
        // player1 = firstPlayer.transform.GetChild(0).GetComponent<PlayerClass>();
        // player1.playerID = 0;
        // player1.isChaser = true;
        // player1.playerBody = firstPlayer;
        // players.Add(player1);

        firstPlayer.transform.GetChild(0).GetComponent<PlayerClass>().playerID = 0;
        firstPlayer.transform.GetChild(0).GetComponent<PlayerClass>().isChaser = true;
        firstPlayer.transform.GetChild(0).GetComponent<PlayerClass>().playerBody = firstPlayer.gameObject;

        //spawn 3 dummies
        // spawnDummyPLayers();
        // spawnDummyPLayers();
        // spawnDummyPLayers();

        // updateColor();
        
    }

    void spawnDummyPLayers()
    {
        randomRespawnNumber = Random.Range(0, 6);
        Debug.Log("random Number: " + randomRespawnNumber);
        GameObject dummyPlayerObject;

        if (randomRespawnNumber >= 0 && randomRespawnNumber <= 5)
        {
            // PhotonNetwork.Instantiate("OVRCameraRig", spawnPoints[randomRespawnNumber].transform.position, spawnPoints[randomRespawnNumber].transform.rotation);
            dummyPlayerObject = Instantiate(dummyPlayer, spawnPoints[randomRespawnNumber].transform.position, spawnPoints[randomRespawnNumber].transform.rotation);
            
            // GameObject playerObject = PhotonNetwork.Instantiate("OVRCameraRig", spawnPoints[numPlayers].transform.position, spawnPoints[numPlayers].transform.rotation);
            // InitializePlayer(playerObject);
        }
        else
        {
            dummyPlayerObject = Instantiate(dummyPlayer, spawnPoints[randomRespawnNumber].transform.position, spawnPoints[randomRespawnNumber].transform.rotation);
        }


        int playerIndex = players.Count;

        // Determine if the player is the chaser
        bool isChaser = false;
        if (playerIndex == 0)
        {
            isChaser = true;
        }

        // Add player to the player list with default attributes
        // players.Add(new PlayerClass(playerIndex, isChaser, dummyPlayerObject));
        PlayerClass temp = new PlayerClass(playerIndex, isChaser, dummyPlayerObject);
        GameObject tempParent = temp.transform.parent.gameObject;
        players.Add(tempParent);
        
        Debug.Log("numplayers = " + players.Count);

    }
    



    void Update()
    {

        
    }



}
