using UnityEngine;
using UnityEngine.Events;

namespace DefaultNamespace
{
    public class InputHandler : MonoBehaviour
    {
        [SerializeField] public UnityEvent<Vector3> onTouch;

        void Update()
        {
            if (Input.touchCount == 0)
                Debug.Log("nothing touched");
            else if (Input.touchCount > 0 || Input.GetTouch(0).phase == TouchPhase.Began)
            {
                onTouch?.Invoke(Input.GetTouch(0).position);
                //SendTouchEvents();
            }
        }
       
    }
}