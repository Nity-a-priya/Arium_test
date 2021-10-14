
using UnityEngine;
using UnityEngine.Events;

public class InputHandler : MonoBehaviour
{

    public int dummy;
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

