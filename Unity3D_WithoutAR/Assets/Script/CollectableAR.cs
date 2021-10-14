using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class CollectableAR : MonoBehaviour
{
    private Action onDestroyCallback;
    public void SaveOnDestroyCallback(Action action)
    { 
        onDestroyCallback = action;
    }
    private void OnTriggerEnter(Collider other)
    {
        onDestroyCallback.Invoke();
        Destroy(gameObject);
    }
}