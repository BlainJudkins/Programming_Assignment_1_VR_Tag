using System.Collections;
using System.Collections.Generic;
using Photon.Realtime;
using UnityEngine;
using TMPro;
public class MainGameScript : MonoBehaviour    // assogm to an empty game object in the scene
{
    // public List<PlayerClass> players = new List<PlayerClass>();
    public List<GameObject> players = new List<GameObject>();
    [SerializeField] private GameObject firstPlayer;
    PlayerClass player1;
    [SerializeField] public List<GameObject> spawnPoints = new List<GameObject>();
    [SerializeField] public List<GameObject> powerUpSpawnPoints = new List<GameObject>();
    [SerializeField] GameObject dummyPlayer;
    [SerializeField] GameObject speedPower;
    [SerializeField] GameObject teleportPower;
    [SerializeField] GameObject forcePower;
    private List<GameObject> powerUps = new List<GameObject>();
    [SerializeField] TMP_Text powerText;
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
        
        powerUps.Add(speedPower);
        powerUps.Add(teleportPower);
        powerUps.Add(forcePower);



        // spawnPowerUps();


        // COMMENT THIS OUT WHEN DONE TESTING !!!!!!!!!! THIS SPAWNS ALL 3 POWER UPS RIGHT AWAY
   
        // Instantiate(powerUps[0], powerUpSpawnPoints[0].transform.position, powerUpSpawnPoints[0].transform.rotation);
        // Instantiate(powerUps[1], powerUpSpawnPoints[1].transform.position, powerUpSpawnPoints[1].transform.rotation);
        Instantiate(powerUps[2], powerUpSpawnPoints[2].transform.position, powerUpSpawnPoints[2].transform.rotation);
    
        
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
        if (numPlayers > 0 && flagNumPlayers == false) // spawn 3 dummies after player joined game // also wait to spawn power ups until someone is in the world
        {
            flagNumPlayers = true;
            spawnDummyPlayer();
            spawnDummyPlayer();
            spawnDummyPlayer();




            // Start the coroutine to spawn power-ups
            StartCoroutine(spawnPowerUpsRoutine());
        }
         ////////////////////// DUMMY PLAYER STUFF ^^^^^
        
    }




    void spawnPowerUps()
    {
        int chooseRandomPower = Random.Range(0,powerUps.Count);
        int choosePowerSpawn = Random.Range(0, powerUpSpawnPoints.Count);

        Instantiate(powerUps[chooseRandomPower], powerUpSpawnPoints[choosePowerSpawn].transform.position, powerUpSpawnPoints[choosePowerSpawn].transform.rotation);
    }
    

    IEnumerator spawnPowerUpsRoutine()
    {
        while (true)
        {
            // Check if there's no power up already spawned
            if (!isPowerUpSpawned())
            {
                spawnPowerUps();
                powerText.text = "A power up has spawned somewhere!";
                yield return new WaitForSeconds(4f); // clear power text after 4 seconds
                powerText.text = "";
            }
            yield return new WaitForSeconds(15f); // Wait for 10 seconds before attempting to spawn another
        }
    }

    bool isPowerUpSpawned()
    {
        foreach (var powerUp in powerUps)
        {
            if (GameObject.Find(powerUp.name + "(Clone)") != null)
            {
                Debug.Log("A power up already exists!");
                return true;
            }
        }
        return false;
    }


}
