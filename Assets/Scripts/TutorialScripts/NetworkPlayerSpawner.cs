using Photon.Pun;
using System.Collections.Generic;
using UnityEngine;

public class NetworkPlayerSpawner : MonoBehaviourPunCallbacks
{
    [SerializeField] List<GameObject> spawnPoints = new List<GameObject>();

    // private PhotonView myView;
    [SerializeField] MainGameScript mainScript;

    // ^^^^^^^^^^^^^^^^^^^^^^^


    private void Start()
    {
        if (PhotonNetwork.IsConnected)
        {
            SpawnPlayer();
        }
    }

    private void SpawnPlayer()
    {
        // Get a random spawn point
        int randomRespawnNumber = Random.Range(0, spawnPoints.Count);
        GameObject spawnPoint = spawnPoints[randomRespawnNumber];

        // Instantiate the player prefab at the spawn point
        GameObject playerObject = PhotonNetwork.Instantiate("Player", spawnPoint.transform.position, Quaternion.identity);

        // Get the Renderer component attached to the child object
        // Renderer renderer = playerObject.GetComponentInChildren<Renderer>();
        Renderer renderer = playerObject.transform.GetChild(0).GetComponent<Renderer>();

        if (PhotonNetwork.IsMasterClient)
        {
            // playerObject.GetComponent<PlayerClass>().InitializePlayer(0, true, playerObject, renderer); // Set the first player as chaser
            playerObject.GetComponent<PlayerClass>().InitializePlayer(PhotonNetwork.CurrentRoom.PlayerCount - 1, true, playerObject, renderer); // Set the first player as chaser

        }
        else
        {
            playerObject.GetComponent<PlayerClass>().InitializePlayer(PhotonNetwork.CurrentRoom.PlayerCount - 1, false, playerObject, renderer); // Set non-host players
        }



        // for dummy spawn test vvvvvvv
        mainScript.numPlayers++;

        // ^^^^^^^^^^^^^^^^^^^^^^^
    }

    // OnJoinedRoom is called when the local player joins a room
    public override void OnJoinedRoom()
    {
        base.OnJoinedRoom();
        SpawnPlayer();
    }

    // OnLeftRoom is called when the local player leaves the room
    public override void OnLeftRoom()
    {
        base.OnLeftRoom();
        PhotonNetwork.DestroyPlayerObjects(PhotonNetwork.LocalPlayer);
    }





    // [PunRPC]
    // public void ChangeColorPlayer(PlayerClass player)
    // {
        
    //     if (player.isChaser)
    //     {
    //         player.transform.GetChild(0).GetComponent<Renderer>().material.color = Color.red;
    //     }
    //     else
    //     {
    //         player.transform.GetChild(0).GetComponent<Renderer>().material.color = Color.blue;
    //     }
        
    // }

    // [PunRPC]
    // public void ChangeColorDummy(dummyScript dummy)
    // {

    //     if (dummy.isChaser)
    //     {
    //         dummy.transform.GetChild(0).GetComponent<Renderer>().material.color = Color.red;
    //     }
    //     else
    //     {
    //         dummy.transform.GetChild(0).GetComponent<Renderer>().material.color = Color.cyan;
    //     }
    // }


    // void Update()
    // {

    //          // Find and store all players and dummies in the scene
    //     mainScript.allPlayers = new List<GameObject>(GameObject.FindGameObjectsWithTag("Player"));
    //     mainScript.allDummies = new List<GameObject>(GameObject.FindGameObjectsWithTag("Dummy"));


    //     for (int player = 0; player < mainScript.allPlayers.Count; player++)
    //     {
    //         myView = mainScript.allPlayers[player].transform.parent.GetComponent<PhotonView>();
    //         photonView.RPC("ChangeColorPlayer", RpcTarget.AllBuffered, mainScript.allPlayers[player].transform.parent); 
    //     }
    //     for (int dummy = 0; dummy < mainScript.allDummies.Count; dummy++)
    //     {
    //         myView = mainScript.allDummies[dummy].transform.parent.GetComponent<PhotonView>();
    //         photonView.RPC("ChangeColorPlayer", RpcTarget.AllBuffered, mainScript.allDummies[dummy].transform.parent); 
    //     } 

    //     mainScript.allPlayers.Clear();
    //     mainScript.allDummies.Clear();
        
    // }
}


