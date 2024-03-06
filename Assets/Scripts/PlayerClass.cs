using Photon.Pun;
using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;


using TMPro;


public class PlayerClass : MonoBehaviourPunCallbacks
{
    public int playerID; 
    public int numLives = 3;     
    public int teleportCredits = 0; 
    public float speed = 10.0f; 
    public Renderer renderer; // Reference to the Renderer component
    GameObject playerBody;
    public bool isChaser;
    private bool timerRunning = false;
    private float timerDuration = 120f; // 2 minute in seconds   
    // private float timerDuration = 5f;

    MainGameScript mainScript;

    private TMP_Text livesText;
    private TMP_Text creditsText;
    private TMP_Text chaserText;
    private TMP_Text LostLifeTxt;
    private GameObject UI_parent;

    void Awake()
    {
        livesText = GameObject.Find("livesText").GetComponent<TextMeshProUGUI>();
        creditsText = GameObject.Find("tpCreditsText").GetComponent<TextMeshProUGUI>();
        chaserText = GameObject.Find("chaserText").GetComponent<TextMeshProUGUI>();
        LostLifeTxt = GameObject.Find("LostLifeTxt").GetComponent<TextMeshProUGUI>();
        UI_parent = GameObject.Find("PlayerUI_obj");
    }
    void Start()
    {
        // Initialize numLives to 3 only if it's 0 /// fixes something weird that happens when spawning player
        if (numLives == 0)
        {
            numLives = 3;
        }
        Debug.Log("lives = " + numLives);

        mainScript = GameObject.Find("GameManager").GetComponent<MainGameScript>();

        // photonView.RPC("SyncValues", RpcTarget.OthersBuffered);


        // Find the TextMeshProUGUI objects dynamically
        // livesText = GameObject.Find("livesText").GetComponent<TextMeshProUGUI>();
        // creditsText = GameObject.Find("tpCreditsText").GetComponent<TextMeshProUGUI>();
        // chaserText = GameObject.Find("chaserText").GetComponent<TextMeshProUGUI>();
        // UI_parent = GameObject.Find("PlayerUI_obj");
    }

    

    [PunRPC]
    public void ChangeColorToRed()
    {
        renderer.material.color = Color.red; // Set color to red
    }

    [PunRPC]
    public void ChangeColorToBlue()
    {
        renderer.material.color = Color.blue; // Set color to blue
    }

    // Method to initialize player attributes
    public void InitializePlayer(int playerID, bool isChaser, GameObject playerBody, Renderer renderer)
    {
        this.playerID = playerID;
        this.isChaser = isChaser;
        this.playerBody = playerBody;
        this.renderer = renderer;
        if (isChaser)
        {
            photonView.RPC("ChangeColorToRed", RpcTarget.AllBuffered); // Set chaser color to red for all players
            // Start the timer if the player is a chaser
            StartTimer();
        }
        else
        {
             photonView.RPC("ChangeColorToBlue", RpcTarget.AllBuffered); 
            // GetComponent<PhotonView>().RPC("ChangeColorToBlue", RpcTarget.AllBuffered);// Set non-chaser color to blue for all players
        }
    }

    private IEnumerator TimerCoroutine()
    {
        timerRunning = true;
        float timer = timerDuration;
        while (timer > 0)
        {
            yield return new WaitForSeconds(1f);
            timer--;
        }
        // When the timer runs out, subtract a life from the player
        numLives--;
        // Debug.Log("Took too long to catch a player! -1 life. Lives left = " + numLives + " for " + playerID);
        if (isChaser)
        {
            StartCoroutine(ShowLostLifeMessageCoroutine());
            timerRunning = false; 
            StartTimer(); // Restart the timer for the chaser
        }
    }

    IEnumerator ShowLostLifeMessageCoroutine()
    {
        LostLifeTxt.text = "You took too long to tag another player! -1 life!";
        yield return new WaitForSeconds(5f); // Show for 5 seconds
        LostLifeTxt.text = ""; // Hide the message
    }
    // Method to start the timer
    private void StartTimer()
    {
        if (!timerRunning)
        {
            StartCoroutine(TimerCoroutine());
        }
    }


    void Update()
    {
        renderer = transform.GetChild(0).GetComponent<Renderer>();
        if (isChaser)
        {
            renderer.material.color = Color.red;
            // photonView.RPC("ChangeColorToRed", RpcTarget.AllBuffered); 
        }
        else
        {
            renderer.material.color = Color.blue;
            // photonView.RPC("ChangeColorToBlue", RpcTarget.AllBuffered); 
        }




        if (numLives <= 0)
        {
            Debug.Log("Player " + playerID + " lost the game!");
            UI_parent.SetActive(false); // hide player UI
            SceneManager.LoadScene(1);
        }



        if (photonView.IsMine)
        {
            livesText.text = "Lives: " + numLives.ToString();
            if (isChaser)
            {
                chaserText.text = "You ARE the chaser!";
            }
            else
            {
                chaserText.text = "You are NOT the chaser";
            }
            creditsText.text = "Teleport Credits: " + teleportCredits.ToString();
        }


        // photonView.RPC("SyncValues", RpcTarget.OthersBuffered);
    }

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

}


/*
public float someFloat = 10f;
public int someInt = 100;
public PhotonView pv;

void Update(){
if(Input.GetKeyDown(KeyCode.Space)){
pv.RPC("SyncValues", RPCTarget.OthersBuffered, someFloat, someInt);
}
}

[PunRPC]
void SyncValues (float myFloat, int myInt){
someFloat = myFloat;
someInt = myInt;
}

//Buffered - New players get the RPC when they join as it's buffered (until this client leaves).

so, in this example I think that the values of the someFloat and someInt should be sync upon all the instances

myView.RPC("SyncValues", RPCTarget.OthersBuffered, someFloat, someInt); --> You are calling this function with arguments, which can be synced across the instances


*/
