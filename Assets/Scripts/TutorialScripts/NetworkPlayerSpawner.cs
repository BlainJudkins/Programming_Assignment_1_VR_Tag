using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class NetworkPlayerSpawner : MonoBehaviourPunCallbacks
{
    [SerializeField] List<GameObject> spawnPoints = new List<GameObject>();
    // List<int> selectedSpawnIndex = new List<int>();
    [SerializeField] MainGameScript mainScript; 
    int randomRespawnNumber = 0;

    private GameObject spawnedPlayerObject;
    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        // Get random number here:
        randomRespawnNumber = Random.Range(0, 6);
        Debug.Log("random Number: " + randomRespawnNumber);

        if (randomRespawnNumber >= 0 && randomRespawnNumber <= 5)
        {
            PhotonNetwork.Instantiate("OVRCameraRig", spawnPoints[randomRespawnNumber].transform.position, spawnPoints[randomRespawnNumber].transform.rotation);
            
            // GameObject playerObject = PhotonNetwork.Instantiate("OVRCameraRig", spawnPoints[numPlayers].transform.position, spawnPoints[numPlayers].transform.rotation);
            // InitializePlayer(playerObject);
        }
        else
        {
            PhotonNetwork.Instantiate("OVRCameraRig", spawnPoints[5].transform.position, spawnPoints[5].transform.rotation);
        }
    }

    public override void OnLeftRoom()
    {
        base.OnLeftRoom();
        PhotonNetwork.Destroy(spawnedPlayerObject);
    }



    // Save instantiated players to the players list in main
    void InitializePlayer(GameObject playerObject)
    {
        int playerIndex = mainScript.players.Count;

        // Determine if the player is the chaser
        bool isChaser = false;
        if (playerIndex == 0)
        {
            isChaser = true;
        }

        // Add player to the player list with default attributes
        mainScript.players.Add(new MainGameScript.Player(playerIndex, isChaser, playerObject));
    }
}