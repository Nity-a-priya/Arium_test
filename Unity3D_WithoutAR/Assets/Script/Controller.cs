using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class Controller : MonoBehaviour
{
    //public GameObject cueBall;
    public Rigidbody cueBall;
    public Collectable collectable;
    
    private int score = 0;
    public Text scoreText;
    public int noOfCollectables;
    
    

    private void Start()
    {
        for (var i = 0; i < noOfCollectables; i++)
        {
            spawnCollectable();
        }
    }

    private void Collect()
    {
        spawnCollectable();
        score += 10;
        scoreText.text = "Score: " + score;
    }
    
    private void spawnCollectable()
    {
        var x = Random.Range(-4.5f, 4.45f);
        var z = Random.Range(-4.5f, 4.45f);
        var artifact = Instantiate(collectable);
        artifact.transform.position = new Vector3(x,0.5f,z);
        artifact.tag = "Respawn";
        artifact.SaveOnDestroyCallback(Collect);
    }

    // Update is called once per frame
    void Update()
    {
        var x = Input.GetAxis("Horizontal");
        var z = Input.GetAxis("Vertical");
        //cueBall.transform.position = new Vector3(x,0.5f,z);
        cueBall.AddForce(new Vector3(x,0f,z));

    }
}
