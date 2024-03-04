using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CatchingLogistics : MonoBehaviour
{
    MainGameScript mainScript;
    int randomRespawnNumber = 0;

    void Start()
    {
        mainScript = GameObject.Find("GameManager").GetComponent<MainGameScript>();
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
                other.transform.parent.GetComponent<dummyScript>().isChaser = true; // so set other dummy as chaser
                other.transform.parent.GetComponent<dummyScript>().ChangeColorToRed(); // change their color
                other.transform.parent.GetComponent<dummyScript>().numLives--; // and subtract their lives
                Debug.Log("dummy " + other.transform.parent.GetComponent<dummyScript>().playerID + " is the new chaser!");
                teleportNewChaser(other.transform.parent); // then teleport them
                // Debug.Log("other lives = " + other.transform.parent.GetComponent<dummyScript>().numLives);
                
                if (isOnDummy()) // I (well, my arm is) am a dummy, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<dummyScript>().isChaser = false; 
                    transform.parent.parent.GetComponent<dummyScript>().ChangeColorToBlue();
                }
                else if (isOnPlayer() ) // I am a player, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<PlayerClass>().isChaser = false;
                    transform.parent.parent.GetComponent<PlayerClass>().ChangeColorToBlue();
                }

            }

            else if (other.CompareTag("Player")) // I tagged another player, ...
            {
                other.transform.parent.GetComponent<PlayerClass>().isChaser = true; // so set other player as chaser
                other.transform.parent.GetComponent<PlayerClass>().ChangeColorToRed(); // change their color
                other.transform.parent.GetComponent<PlayerClass>().numLives--; // and subtract their lives
                teleportNewChaser(other.transform.parent); // then teleport them
                // Debug.Log("other lives = " + other.transform.parent.GetComponent<PlayerClass>().numLives);
                Debug.Log("player " + other.transform.parent.GetComponent<PlayerClass>().playerID + " is the new chaser!");
                
                if (isOnDummy()) // I (well, my arm is) am a dummy, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<dummyScript>().isChaser = false; 
                    transform.parent.parent.GetComponent<dummyScript>().ChangeColorToBlue();
                }
                else if (isOnPlayer() ) // I am a player, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<PlayerClass>().isChaser = false;
                    transform.parent.parent.GetComponent<PlayerClass>().ChangeColorToBlue();
                }

            }


        }

        // if I am a Player object and I AM the chaser
        else if (isOnPlayer() && transform.parent.parent.GetComponent<PlayerClass>().isChaser == true) 
        {
            if (other.CompareTag("Dummy")) // I tagged another dummy, ...
            {
                other.transform.parent.GetComponent<dummyScript>().isChaser = true; // so set other dummy as chaser
                other.transform.parent.GetComponent<dummyScript>().ChangeColorToRed(); // change their color
                other.transform.parent.GetComponent<dummyScript>().numLives--; // and subtract their lives
                teleportNewChaser(other.transform.parent); // then teleport them
                // Debug.Log("other lives = " + other.transform.parent.GetComponent<dummyScript>().numLives);
                Debug.Log("dummy " + other.transform.parent.GetComponent<dummyScript>().playerID + " is the new chaser!");
                
                if (isOnDummy()) // I (well, my arm is) am a dummy, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<dummyScript>().isChaser = false; 
                    transform.parent.parent.GetComponent<dummyScript>().ChangeColorToBlue();
                }
                else if (isOnPlayer() ) // I am a player, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<PlayerClass>().isChaser = false;
                    transform.parent.parent.GetComponent<PlayerClass>().ChangeColorToBlue();
                }

            }

            else if (other.CompareTag("Player")) // I tagged another player, ...
            {
                other.transform.parent.GetComponent<PlayerClass>().isChaser = true; // so set other player as chaser
                other.transform.parent.GetComponent<PlayerClass>().ChangeColorToRed(); // change their color
                other.transform.parent.GetComponent<PlayerClass>().numLives--; // and subtract their lives
                teleportNewChaser(other.transform.parent); // then teleport them
                // Debug.Log("other lives = " + other.transform.parent.GetComponent<PlayerClass>().numLives);
                Debug.Log("player " + other.transform.parent.GetComponent<PlayerClass>().playerID + " is the new chaser!");
                if (isOnDummy()) // I (well, my arm is) am a dummy, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<dummyScript>().isChaser = false; 
                    transform.parent.parent.GetComponent<dummyScript>().ChangeColorToBlue();
                }
                else if (isOnPlayer() ) // I am a player, so set my self to no longer be chaser and change color to blue
                {
                    transform.parent.parent.GetComponent<PlayerClass>().isChaser = false;
                    transform.parent.parent.GetComponent<PlayerClass>().ChangeColorToBlue();
                }

            }
        }
    
    
    
        //////////////////////////////////////////////////////////////////
    

        // if (isOnDummy()) // if I am a dummy 
        // {
        //     if (other.CompareTag("Speed")) // and I touch a speed power
        //     {
                
        //     }
        //     if (other.CompareTag("Teleport")) // and I touch a teleport power
        //     {
                
        //     }
        //     if (other.CompareTag("Force") && transform.parent.parent.GetComponent<dummyScript>().isChaser == true) // and I touch a force power AND I am the chaser
        //     {
        //         // pull everyone to me
        //     }
        //     else if (other.CompareTag("Force") && transform.parent.parent.GetComponent<dummyScript>().isChaser == false) // and I touch and force power and I am NOT the chaser
        //     {
        //         // push away ONLY the CHASER
        //     }
        // }

        if (isOnPlayer()) // if I am a player
        {
            // Debug.Log(other.tag);
            if (other.CompareTag("Speed")) // and I touch a speed power
            {
                Debug.Log("touching speed");
                Destroy(other.gameObject); // destroy the power up
                StartCoroutine(speedBoostRoutine());

            }
            if (other.CompareTag("Teleport")) // and I touch a teleport power
            {
                Debug.Log("touching teleport");
                Destroy(other.gameObject); 
                transform.parent.parent.GetComponent<PlayerClass>().teleportCredits += 1; // add a tp credit

            }
            if (other.CompareTag("Force") && transform.parent.parent.GetComponent<PlayerClass>().isChaser == true) // and I touch a force power AND I am the chaser
            {
                // pull everyone to me
                Debug.Log("touching force as the chaser");
                Destroy(other.gameObject); 

                // TODO

            }
            else if (other.CompareTag("Force") && transform.parent.parent.GetComponent<PlayerClass>().isChaser == false) // and I touch and force power and I am NOT the chaser
            {
                // push away ONLY the CHASER
                Debug.Log("touching force as NOT the chaser");
                Destroy(other.gameObject); 


                // TODO 
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

    
}
