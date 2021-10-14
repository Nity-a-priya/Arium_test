using System.Collections;
using AriumFramework;
using AriumFramework.Plugins.UnityCore.Extensions;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.TestTools;
using UnityEngine.UI;

namespace Tests
{
    public class ARGame
    {
        public Arium _arium;
        private float distance = 5;
        private Ray ray;
        private float value;
        public int score=0;
        private RaycastHit hit;
        
        [SetUp]
        public void SetUp()
        {
            _arium = new Arium();
            SceneManager.LoadScene("NewAr");
        }
        
        [UnityTest]
        public IEnumerator Validate5CubesArePresentOnSceneLoad()
        {
            SceneManager.LoadScene("NewAr");
            for (int i = 1; i <= 5; i++)
            {
                GameObject cube = _arium.FindGameObject("Cube"+i);
                Assert.True(cube.activeInHierarchy);
                yield return new WaitForSeconds(0.5f);
            }
        }
        
        [UnityTest]
        public IEnumerator ValidateInitialScoreIsZero()
        {
            GameObject score = _arium.FindGameObject("ScoreText");
            Assert.AreEqual("Score:0", score.GetText());
            yield return new WaitForSeconds(2);
        }

        [UnityTest]
        public IEnumerator ValidateCubeIsDestroyedOnRaycast()
        {
            yield return new WaitForSeconds(5);
            Transform cubeTransform = _arium.GetComponent<Transform>("Cube1");
            Debug.Log(cubeTransform.position);
            yield return new WaitForSeconds(2);
            Debug.Log(Camera.main.transform.position);
            Camera.main.transform.position = cubeTransform.position-new Vector3(0,0,1);
            Debug.Log(Camera.main.transform.position);
            // yield return new WaitForSeconds(2);
            // ray= Camera.main.ScreenPointToRay(cubeTransform.position);
            // Physics.Raycast(ray, out hit);
            yield return new WaitForSeconds(15);
            GameObject scoreVal = _arium.FindGameObject("ScoreText");
            Vector3 screenPoint = Camera.main.WorldToScreenPoint(cubeTransform.position);
            _arium.GetComponent<Controller>("Controller").Click(screenPoint);
            yield return new WaitForSeconds(5);
            Assert.AreEqual("Score:10", scoreVal.GetText());
        }

        [UnityTest]
        public IEnumerator ValidateCubeIsDestroyedFromPeakDistance()
        {
            GameObject cube = _arium.FindGameObject("Cube1");
            Transform cubeTransform = _arium.GetComponent<Transform>("Cube1");
            Debug.Log(cubeTransform.position);
            yield return new WaitForSeconds(2);
            Debug.Log(Camera.main.transform.position);
            Camera.main.transform.position = cubeTransform.position-new Vector3(0,0,2);
            Debug.Log(Camera.main.transform.position);
            GameObject scoreVal = _arium.FindGameObject("ScoreText");
            Vector3 screenPoint = Camera.main.WorldToScreenPoint(cubeTransform.position);
            _arium.GetComponent<Controller>("Controller").Click(screenPoint);
            yield return new WaitForSeconds(5);
            Assert.AreEqual("Score:10", scoreVal.GetText());
        }
        
        [UnityTest]
        public IEnumerator ValidateCubeIsDestroyedFromBeyondPeakDistance()
        {
            GameObject cube = _arium.FindGameObject("Cube1");
            Transform cubeTransform = _arium.GetComponent<Transform>("Cube1");
            yield return new WaitForSeconds(2);
            Camera.main.transform.position = cubeTransform.position-new Vector3(0,0,3);
            Debug.Log(Camera.main.transform.position);
            yield return new WaitForSeconds(2);
            ray= Camera.main.ScreenPointToRay(cubeTransform.position);
            Physics.Raycast(ray, out hit);
            Assert.True(cube.activeInHierarchy);
        }
        
        [TearDown]
        public void tearDown()
        {
            SceneManager.UnloadSceneAsync("NewAr");
        }
        
    }
}