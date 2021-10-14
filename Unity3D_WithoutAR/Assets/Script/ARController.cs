using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using Random = UnityEngine.Random;
public class ARController : MonoBehaviour
{
    // public ARCameraManager ArCam;
    public Collectable collectable;
    public int noOfCollectables;
    private Ray ray;
    private RaycastHit hit;
    private Touch touch;
    public int i = 1;
    private void Start()
    {
        Scorescript.scoreValue = 0;
        for (var i = 0; i < noOfCollectables; i++)
        {
            SpawnCollectable();
        }
    }
    private void Collect()
    {
        SpawnCollectable();
    }
    private void SpawnCollectable()
    {
        var x = Random.Range(-4f,4f);
        var y = Random.Range(-4f,4f);
        var z = Random.Range(-4f,4f);
        var artifact = Instantiate(collectable,new Vector3(x,y,z),Quaternion.identity);
        artifact.name = "Cube"+i;
        i++;
        //artifact.transform.position = new Vector3(x, y, z);
        artifact.SaveOnDestroyCallback(Collect);
    }
    // Update is called once per frame
    public void Click(Vector3 clickPosition)
    {
        ray= Camera.main.ScreenPointToRay(clickPosition);
        //Debug.DrawRay(ray.origin,ray.direction * 20,Color.red);
        if (Physics.Raycast(ray,out hit,Mathf.Abs(2.0f)))
        {
            Debug.Log("cube was hit");
            Destroy(hit.transform.gameObject);
            Scorescript.scoreValue += 10;
        }
        // if (Input.anyKeyDown)
        // {
        //     Debug.Log("key pressed");
        //     Camera.main.transform.position = collectable.transform.position - new Vector3(0, 0, 1);
        //     if (Physics.Raycast(Camera.main.transform.position, Camera.main.transform.forward, out hit))
        //     {
        //         Debug.Log("cube was hit");
        //         Destroy(hit.transform.gameObject);
        //         Scorescript.scoreValue += 10;
        //     }
        // }
    }
}