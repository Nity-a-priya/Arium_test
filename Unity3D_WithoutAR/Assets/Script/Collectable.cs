using System.Collections;
using System;
using System.Collections.Generic;
using UnityEngine;

public class Collectable : MonoBehaviour
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
