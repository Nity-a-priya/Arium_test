using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class CameraMovement : MonoBehaviour
{
    //target object
    public Transform targetObject;
    //distance between camera and offset 
    public Vector3 cameraOffset;
    //smooth factor for camera rotation
    public float smoothFactor = 0.5f;
    //will check if camera looks at target ot not
    public bool lookAtTarrget = false;
    // Start is called before the first frame update
    void Start()
    {
        cameraOffset = transform.position - targetObject.transform.position;
    }
    // Update is called once per frame
    void LateUpdate()
    {
        Vector3 newPosition = targetObject.transform.position + cameraOffset;
        transform.position = Vector3.Slerp(transform.position, newPosition, smoothFactor);
        if(lookAtTarrget)
        {
            transform.LookAt(targetObject);
        }
    }
}