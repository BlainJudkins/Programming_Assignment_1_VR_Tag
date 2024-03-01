using Photon.Pun;
using System.Collections.Generic;
using UnityEngine;

public class NetworkPlayerSpawner : MonoBehaviourPunCallbacks
{
    [SerializeField] List<GameObject> spawnPoints = new List<GameObject>();

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
        Renderer renderer = playerObject.GetComponentInChildren<Renderer>();

        if (PhotonNetwork.IsMasterClient)
        {
            playerObject.GetComponent<PlayerClass>().InitializePlayer(0, true, playerObject, renderer); // Set the first player as chaser
        }
        else
        {
            playerObject.GetComponent<PlayerClass>().InitializePlayer(PhotonNetwork.CurrentRoom.PlayerCount - 1, false, playerObject, renderer); // Set non-host players
        }
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
}







// // works for setting first player as chaser, but not synced with other players 
// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using Photon.Pun;

// public class NetworkPlayerSpawner : MonoBehaviourPunCallbacks
// {
//     [SerializeField] List<GameObject> spawnPoints = new List<GameObject>();

//     private void Start()
//     {
//         if (PhotonNetwork.IsConnected)
//         {
//             SpawnPlayer();
//         }
//     }

//     private void SpawnPlayer()
//     {
//         // Get a random spawn point
//         int randomRespawnNumber = Random.Range(0, spawnPoints.Count);
//         GameObject spawnPoint = spawnPoints[randomRespawnNumber];

//         // Instantiate the player prefab at the spawn point
//         GameObject playerObject = PhotonNetwork.Instantiate("Player", spawnPoint.transform.position, Quaternion.identity);

//         // Get the PlayerClass component of the playerObject
//         // PlayerClass playerClass = playerObject.transform.GetChild(0).GetComponent<PlayerClass>();

//         // Assign player attributes based on whether the player is the host
//         if (PhotonNetwork.IsMasterClient)
//         {
//             playerObject.GetComponent<PlayerClass>().playerID = 0;
//             playerObject.GetComponent<PlayerClass>().isChaser = true;
//         }
//         else
//         {
//             playerObject.GetComponent<PlayerClass>().isChaser = false;
//             playerObject.GetComponent<PlayerClass>().playerID = PhotonNetwork.CurrentRoom.PlayerCount - 1; // Player ID starts from 1 for non-host players
//         }
//         playerObject.GetComponent<PlayerClass>().playerBody = playerObject;
//     }

//     // OnJoinedRoom is called when the local player joins a room
//     public override void OnJoinedRoom()
//     {
//         base.OnJoinedRoom();
//         SpawnPlayer();
//     }

//     // OnLeftRoom is called when the local player leaves the room
//     public override void OnLeftRoom()
//     {
//         base.OnLeftRoom();
//         PhotonNetwork.DestroyPlayerObjects(PhotonNetwork.LocalPlayer);
//     }
// }




//////////////////

// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using Photon.Pun;

// public class NetworkPlayerSpawner : MonoBehaviourPunCallbacks
// {
//     [SerializeField] List<GameObject> spawnPoints = new List<GameObject>();
//     // List<int> selectedSpawnIndex = new List<int>();
//     // [SerializeField] MainGameScript mainScript; 
//     int randomRespawnNumber = 0;

//     private GameObject spawnedPlayerObject;
//     public override void OnJoinedRoom()
//     {
//         base.OnJoinedRoom();
//         // Get random number here:
//         randomRespawnNumber = Random.Range(0, 6);
//         Debug.Log("random Number: " + randomRespawnNumber);

//         if (randomRespawnNumber >= 0 && randomRespawnNumber <= 5)
//         {
//             // PhotonNetwork.Instantiate("OVRCameraRig", spawnPoints[randomRespawnNumber].transform.position, spawnPoints[randomRespawnNumber].transform.rotation);
//             // PhotonNetwork.Instantiate("Player", spawnPoints[randomRespawnNumber].transform.position, spawnPoints[randomRespawnNumber].transform.rotation);
//             PhotonNetwork.Instantiate("Player", spawnPoints[randomRespawnNumber].transform.position, Quaternion.identity);




//             // GameObject playerObject = PhotonNetwork.Instantiate("OVRCameraRig", spawnPoints[numPlayers].transform.position, spawnPoints[numPlayers].transform.rotation);
//             // InitializePlayer(playerObject);
//         }
//         else
//         {
//             // PhotonNetwork.Instantiate("Player", spawnPoints[5].transform.position, spawnPoints[5].transform.rotation);
//             PhotonNetwork.Instantiate("Player", spawnPoints[5].transform.position, Quaternion.identity);
            
//         }
//     }

//     public override void OnLeftRoom()
//     {
//         base.OnLeftRoom();
//         PhotonNetwork.Destroy(spawnedPlayerObject);
//     }



// }




