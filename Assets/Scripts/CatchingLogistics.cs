using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class CatchingLogistics : MonoBehaviour
{
    MainGameScript mainScript;
    int randomRespawnNumber = 0;
    private PhotonView myView;
    AudioSource powerSound;

    void Start()
    {
        mainScript = GameObject.Find("GameManager").GetComponent<MainGameScript>();
        myView = transform.parent.parent.GetComponent<PhotonView>();

        GameObject powerUpSoundObj = GameObject.Find("PowerUp-Pickup");
        powerSound = powerUpSoundObj.GetComponent<AudioSource>();

    }

    void teleportNewChaser(Transform parent)
    {
        
        randomRespawnNumber = Random.Range(0, 6);
        GameObject spawnPoint = mainScript.spawnPoints[randomRespawnNumber];

        Quaternion savedRotation = parent.rotation; // Save the current rotation

        parent.transform.position = spawnPoint.transform.position; 
        parent.transform.rotation = Quaternion.identity; // Reset rotation

        // Apply the saved rotation after teleporting
        parent.rotation = savedRotation;
    }



    bool isOnPlayer() // checks if this instance of the script is on a player
    {
        if (transform.parent.parent.GetComponent<PlayerClass>() != null)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isOnDummy() // checks if this instance of the script is on a dummy
    {
        if (transform.parent.parent.GetComponent<dummyScript>() != null)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        // if I am a dummy object and I AM the chaser
        if (isOnDummy() && transform.parent.parent.GetComponent<dummyScript>().isChaser == true) 
        {
            if (other.CompareTag("Dummy")) // I tagged another dummy, ...
            {
                teleportNewChaser(other.transform.parent); // teleport them FIRST before changing variables
                other.transform.parent.GetComponent<dummyScript>().isChaser = true; // so set other dummy as chaser
                // other.transform.parent.GetComponent<dummyScript>().ChangeColorToRed(); // change their color
                other.transform.parent.GetComponent<dummyScript>().numLives--; // and subtract their lives
                Debug.Log("dummy " + other.transform.parent.GetComponent<dummyScript>().playerID + " is the new chaser!");
                
                // Debug.Log("other lives = " + other.transform.parent.GetComponent<dummyScript>().numLives);
                
                if (isOnDummy()) // I (well, my arm is) am a dummy, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<dummyScript>().isChaser = false; 
                    // transform.parent.parent.GetComponent<dummyScript>().ChangeColorToBlue();
                }
                else if (isOnPlayer() ) // I am a player, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<PlayerClass>().isChaser = false;
                    // transform.parent.parent.GetComponent<PlayerClass>().ChangeColorToBlue();
                }

            }

            else if (other.CompareTag("Player")) // I tagged another player, ...
            {
                teleportNewChaser(other.transform.parent); // then teleport them
                other.transform.parent.GetComponent<PlayerClass>().isChaser = true; // so set other player as chaser
                // other.transform.parent.GetComponent<PlayerClass>().ChangeColorToRed(); // change their color
                other.transform.parent.GetComponent<PlayerClass>().numLives--; // and subtract their lives
                
                // Debug.Log("other lives = " + other.transform.parent.GetComponent<PlayerClass>().numLives);
                Debug.Log("player " + other.transform.parent.GetComponent<PlayerClass>().playerID + " is the new chaser!");
                
                if (isOnDummy()) // I (well, my arm is) am a dummy, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<dummyScript>().isChaser = false; 
                    // transform.parent.parent.GetComponent<dummyScript>().ChangeColorToBlue();
                }
                else if (isOnPlayer() ) // I am a player, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<PlayerClass>().isChaser = false;
                    // transform.parent.parent.GetComponent<PlayerClass>().ChangeColorToBlue();
                }

            }

            // transform.parent.parent.GetComponent<PhotonView>().RPC("SyncValues", RpcTarget.OthersBuffered);

        }

        // if I am a Player object and I AM the chaser
        else if (isOnPlayer() && transform.parent.parent.GetComponent<PlayerClass>().isChaser == true) 
        {
            if (other.CompareTag("Dummy")) // I tagged another dummy, ...
            {
                teleportNewChaser(other.transform.parent); // then teleport them
                other.transform.parent.GetComponent<dummyScript>().isChaser = true; // so set other dummy as chaser
                // other.transform.parent.GetComponent<dummyScript>().ChangeColorToRed(); // change their color
                other.transform.parent.GetComponent<dummyScript>().numLives--; // and subtract their lives
                
                // Debug.Log("other lives = " + other.transform.parent.GetComponent<dummyScript>().numLives);
                Debug.Log("dummy " + other.transform.parent.GetComponent<dummyScript>().playerID + " is the new chaser!");
                
                if (isOnDummy()) // I (well, my arm is) am a dummy, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<dummyScript>().isChaser = false; 
                    // transform.parent.parent.GetComponent<dummyScript>().ChangeColorToBlue();
                }
                else if (isOnPlayer() ) // I am a player, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<PlayerClass>().isChaser = false;
                    // transform.parent.parent.GetComponent<PlayerClass>().ChangeColorToBlue();
                }

            }

            else if (other.CompareTag("Player")) // I tagged another player, ...
            {
                teleportNewChaser(other.transform.parent); // then teleport them
                other.transform.parent.GetComponent<PlayerClass>().isChaser = true; // so set other player as chaser
                // other.transform.parent.GetComponent<PlayerClass>().ChangeColorToRed(); // change their color
                other.transform.parent.GetComponent<PlayerClass>().numLives--; // and subtract their lives
                
                // Debug.Log("other lives = " + other.transform.parent.GetComponent<PlayerClass>().numLives);
                Debug.Log("player " + other.transform.parent.GetComponent<PlayerClass>().playerID + " is the new chaser!");
                if (isOnDummy()) // I (well, my arm is) am a dummy, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<dummyScript>().isChaser = false; 
                    // transform.parent.parent.GetComponent<dummyScript>().ChangeColorToBlue();
                }
                else if (isOnPlayer() ) // I am a player, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<PlayerClass>().isChaser = false;
                    // transform.parent.parent.GetComponent<PlayerClass>().ChangeColorToBlue();
                }

            }




            // transform.parent.parent.GetComponent<PhotonView>().RPC("SyncValues", RpcTarget.OthersBuffered);

        }
    
    
    
        //////////////////////////////////////////////////////////////////
        ///    POWER UPS
    

        if (isOnPlayer()) // if I am a player
        {
            // Debug.Log(other.tag);
            if (other.CompareTag("Speed")) // and I touch a speed power
            {
                Debug.Log("touching speed");
                Destroy(other.gameObject); // destroy the power up
                powerSound.Play();
                StartCoroutine(speedBoostRoutine());

            }
            if (other.CompareTag("Teleport")) // and I touch a teleport power
            {
                Debug.Log("touching teleport");
                Destroy(other.gameObject); 
                powerSound.Play();
                transform.parent.parent.GetComponent<PlayerClass>().teleportCredits += 1; // add a tp credit

            }
            if (other.CompareTag("Force") && transform.parent.parent.GetComponent<PlayerClass>().isChaser == true) // and I touch a force power AND I am the chaser
            {
                // pull everyone to me
                Debug.Log("touching force as the chaser");
                Destroy(other.gameObject); 
                powerSound.Play();
                StartCoroutine(pullForceRoutine());
                

            }
            else if (other.CompareTag("Force") && transform.parent.parent.GetComponent<PlayerClass>().isChaser == false) // and I touch and force power and I am NOT the chaser
            {
                // push away ONLY the CHASER
                Debug.Log("touching force as NOT the chaser");
                Destroy(other.gameObject); 
                powerSound.Play();
                StartCoroutine(PushForceRoutine());
            }

            if (other.CompareTag("Smoke")) // and I touch a teleport power
            {
                Debug.Log("touching smoke");
                Destroy(other.gameObject); 
                powerSound.Play();
                StartCoroutine(SmokescreenRoutine());
            }
        }
    
    
    }
    

    IEnumerator speedBoostRoutine()
    {
        Debug.Log("speed = " + transform.parent.parent.GetComponent<PlayerClass>().speed.ToString());
        transform.parent.parent.GetComponent<PlayerClass>().speed *= 2; // apply speed boost
        Debug.Log("speed = " + transform.parent.parent.GetComponent<PlayerClass>().speed.ToString());
        yield return new WaitForSeconds(5f); // Wait for 5 seconds

        transform.parent.parent.GetComponent<PlayerClass>().speed /= 2; // Revert the speed back to normal
        Debug.Log("speed = " + transform.parent.parent.GetComponent<PlayerClass>().speed.ToString());
    }


    IEnumerator pullForceRoutine()
    {
        float maxTime = 5f; // Duration for which the pulling effect will last
        float timer = 0f;

        // Find and store all players and dummies in the scene
        List<GameObject> players = new List<GameObject>(GameObject.FindGameObjectsWithTag("Player"));
        List<GameObject> dummies = new List<GameObject>(GameObject.FindGameObjectsWithTag("Dummy"));


        // Remove the object that touched the force powerup from the lists
        players.Remove(transform.parent.gameObject);
        dummies.Remove(transform.parent.gameObject);

        // Apply pulling force for the specified duration
        while (timer < maxTime)
        {
            for (int i = 0; i < players.Count; i++)
            {
                Vector3 direction = transform.parent.transform.position - players[i].transform.parent.transform.position; // since the tags are all on the body, we need to access their parent object
                players[i].transform.parent.transform.position += direction.normalized * Time.deltaTime;
            }

            for (int i = 0; i < dummies.Count; i++)
            {
                Vector3 direction = transform.parent.transform.position - dummies[i].transform.parent.transform.position;
                dummies[i].transform.parent.transform.position += direction.normalized * Time.deltaTime;
            }

            timer += Time.deltaTime;
            yield return null;
        }
    }

    IEnumerator PushForceRoutine()
    {
        float maxTime = 5f; // Duration for which the pushing effect will last
        float timer = 0f;

        // Find and store all players and dummies in the scene
        GameObject[] playerObjects = GameObject.FindGameObjectsWithTag("Player");
        GameObject[] dummyObjects = GameObject.FindGameObjectsWithTag("Dummy");

        // Find the GameObject that is the chaser
        GameObject chaser = null;
        for (int i = 0; i < playerObjects.Length; i++)
        {
            if (playerObjects[i].transform.parent.GetComponent<PlayerClass>().isChaser)
            {
                chaser = playerObjects[i];
                break;
            }
        }
        if (chaser == null) // it means that none of the players are the chaser, but a dummy is!
        {
            for (int i = 0; i < dummyObjects.Length; i++)
            {
                if (dummyObjects[i].transform.parent.GetComponent<dummyScript>().isChaser)
                {
                    chaser = dummyObjects[i];
                    break;
                }
            }
        }

        // Apply pushing force for the specified duration
        while (timer < maxTime)
        {
            if (chaser != null)
            {
                Vector3 direction = chaser.transform.parent.transform.position - transform.parent.transform.position;
                chaser.transform.parent.transform.position += direction.normalized * Time.deltaTime;
            }

            timer += Time.deltaTime;
            yield return null;
        }
    }

    IEnumerator SmokescreenRoutine()
    {
        float duration = 6f; // Duration for which the smoke screen will last // 5 seconds is too short
        float timer = 0f;
        List<GameObject> smokePrefabs = new List<GameObject>(); // List to store instantiated smoke prefabs


        // Instantiate smoke prefabs at regular intervals
        while (timer < duration)
        {
            GameObject smokePrefabInstance = Instantiate(mainScript.smokePrefab, transform.parent.position, transform.parent.rotation);
            smokePrefabs.Add(smokePrefabInstance); // Add instantiated smoke prefab to the list
            yield return new WaitForSeconds(0.5f); // Adjust this value to control the frequency of smoke appearance
            timer += 0.5f; // Increment timer
        }

        // Destroy all instantiated smoke prefabs
        for (int i = 0; i < smokePrefabs.Count; i++)
        {
            Destroy(smokePrefabs[i]);
        }

        smokePrefabs.Clear();
    }  


    
}


/*

photonView.RPC("SyncValues", RpcTarget.OthersBuffered);
   

    [PunRPC] void SyncValues()
    {
        for (int i = 0; i < mainScript.allPlayers.Count; i++)
        {
            if (mainScript.allPlayers[i].GetComponent<PlayerClass>().playerID == playerID) // I found myself in the list
            {
                mainScript.allPlayers[i].GetComponent<PlayerClass>().isChaser = isChaser;
            }
        }
        for (int j = 0; j < mainScript.allDummies.Count; j++)
        {
            if (mainScript.allDummies[j].GetComponent<PlayerClass>().playerID == playerID) // I found myself in the list
            {
                mainScript.allDummies[j].GetComponent<PlayerClass>().isChaser = isChaser;
            }
        }
    }

*/