using System.Collections;
using System.Collections.Generic;
using AriumFramework;
using AriumFramework.Exceptions;
using AriumFramework.Plugins.UnityCore.Extensions;
using AriumFramework.Plugins.UnityCore.Interactions;
using NUnit.Framework;
using UnityEngine;
using System;
using UnityEngine.SceneManagement;
using UnityEngine.TestTools;
using UnityEngine.UI;
using Assert = UnityEngine.Assertions.Assert;

namespace Tests
{
    public class GameUnitTests
    {
        private Arium _arium;
        public int finalScore=0;
        [OneTimeSetUp]
        public void SetUp()
        {
            _arium = new Arium();

            SceneManager.LoadScene("Game");
        }
        [UnityTest]
        public IEnumerator CheckBoundaryConditions()
        {


            const float force = 50;
            const float positiveBallPosition = 4.5f;
            const float negativeBallPosition = -4.5f;
            const string ballObjectName = "Cueball";
            yield return new WaitForSeconds(1);
            
            Transform ballTransform = _arium.GetComponent<Transform>(ballObjectName);
            ballTransform.position = new Vector3(0, 0.5f, 0);
            //Assert.AreEqual(new Vector3(0,0.5f,0), ballTransform.position);
            //yield return new WaitForSeconds(2);
            UnityPushObject.Force = Vector3.forward * force;

            for (int i = 0; i < 12; i++)
            {
                _arium.PerformAction(new UnityPushObject(), ballObjectName);
                yield return new WaitForSeconds(0.8f);
                if (Math.Abs(positiveBallPosition-ballTransform.position.z) < 0.1f)
                {
                    break;
                }
            }

            Debug.Log(positiveBallPosition+ "-->" + ballTransform.position.z);
            Assert.AreApproximatelyEqual(positiveBallPosition, ballTransform.position.z, 0.1f);
            
            UnityPushObject.Force = Vector3.back * force;
            for (int i = 0; i < 12; i++)
            {
                _arium.PerformAction(new UnityPushObject(), ballObjectName);
                yield return new WaitForSeconds(1);
                if (Math.Abs(negativeBallPosition-ballTransform.position.z) < 0.1f)
                {
                    break;
                }
            }
            
            Debug.Log(negativeBallPosition+ "-->" + ballTransform.position.z);
            Assert.AreApproximatelyEqual(negativeBallPosition, ballTransform.position.z, 0.1f);
            
            UnityPushObject.Force = Vector3.left * force;
            for (int i = 0; i < 12; i++)
            {
                _arium.PerformAction(new UnityPushObject(), ballObjectName);
                yield return new WaitForSeconds(0.8f);
                if (Math.Abs(negativeBallPosition-ballTransform.position.x) < 0.1f)
                {
                    break;
                }
            }
            
            Debug.Log(negativeBallPosition+ "-->" + ballTransform.position.x);
            
            Assert.AreApproximatelyEqual(negativeBallPosition, ballTransform.position.x, 0.1f);
            
            UnityPushObject.Force = Vector3.right * force;
            for (int i = 0; i < 12; i++)
            {
                _arium.PerformAction(new UnityPushObject(), ballObjectName);
                yield return new WaitForSeconds(1);
                if (Math.Abs(positiveBallPosition-ballTransform.position.x) < 0.1f)
                {
                    break;
                }
            }
            
            Debug.Log(positiveBallPosition+ "-->" + ballTransform.position.x);
            Assert.AreApproximatelyEqual(positiveBallPosition, ballTransform.position.x, 0.1f);
            

        }

        [UnityTest]
        public IEnumerator MoveAllDirections()
        {
            const float force = 100;
            const string ballObjectName = "Cueball";
            Transform ballTransform = _arium.GetComponent<Transform>(ballObjectName);

            ballTransform.position = new Vector3(0, 0.5f, 0);
            
            //Assert.AreEqual(originalPosition, ballTransform.position);
            yield return new WaitForSeconds(2);
            
            UnityPushObject.Force = Vector3.forward * force;
            _arium.PerformAction(new UnityPushObject(), ballObjectName);
            yield return new WaitForSeconds(2);
            
            UnityPushObject.Force = Vector3.back * force;
            _arium.PerformAction(new UnityPushObject(), ballObjectName);
            yield return new WaitForSeconds(2);
            
            UnityPushObject.Force = Vector3.left * force;
            _arium.PerformAction(new UnityPushObject(), ballObjectName);
            yield return new WaitForSeconds(2);
            
            UnityPushObject.Force = Vector3.right * force;
            _arium.PerformAction(new UnityPushObject(), ballObjectName);
            yield return new WaitForSeconds(2);
            
            UnityPushObject.Force = new Vector3(-2f,0.5f,2f) * force;
            _arium.PerformAction(new UnityPushObject(), ballObjectName);
            yield return new WaitForSeconds(2);
            
            UnityPushObject.Force = new Vector3(2f,0.5f,-2f) * force;
            _arium.PerformAction(new UnityPushObject(), ballObjectName);
            yield return new WaitForSeconds(6);

            Debug.Log(ballTransform.position);
            Assert.AreApproximatelyEqual(0, ballTransform.position.x,0.1f);
            Assert.AreEqual(0.5f, ballTransform.position.y);
            Assert.AreApproximatelyEqual(0, ballTransform.position.z,0.1f);

        }

        [UnityTest,Order(1)]
        [Ignore("For more than one hit")]
        public IEnumerator DestroyObjectAndCheckScoreUpdate()
        {
            yield return new WaitForSeconds(3);
            int sc = 0;
            //const float force = 50;
            var delta = new Vector3(0.1f, 0.5f, 0.1f);
            const string cubeObjectName = "Cube(Clone)";
            const string ballObjectName = "Cueball";
            const string cubeObjectTag = "Respawn";
            yield return new WaitForSeconds(2);
            GameObject score = _arium.FindGameObject("Score");
            Debug.Log("Initial Score: "+score.GetText());
            Text inputField = _arium.GetComponent<Text>("Score");
            Debug.Log(inputField.text+"************");
            
            Assert.AreEqual("Score: " + sc, score.GetText());

            yield return new WaitForSeconds(2);
            
            Transform ballTransform = _arium.GetComponent<Transform>(ballObjectName);

            for (int i = 0; i < 5; i++)
            {
                Transform cubeTransform = _arium.GetComponent<Transform>(cubeObjectName);
                GameObject[] _list = GameObject.FindGameObjectsWithTag(cubeObjectTag);
                for (int j = 0; j < _list.Length; j++)
                {
                    Debug.Log(_list[j].transform.position+",");
                    if ((Math.Abs(_list[j].transform.position.x - cubeTransform.transform.position.x)<1.0f)&&(Math.Abs(_list[j].transform.position.z - cubeTransform.transform.position.z)<1.0f))
                    {
                        sc += 10;
                    }
                }
                
                //Debug.Log(ballTransform.transform.position+"------");
                //Debug.Log(cubeTransform.transform.position+",,,,,,,");
                //Debug.Log(ballTransform.transform.position-cubeTransform.transform.position+"*******");
                ballTransform.transform.position = cubeTransform.transform.position;
                yield return new WaitForSeconds(2);
                Assert.IsNull(cubeTransform);
                Debug.Log("Cube Destroyed");
                
                Debug.Log("score==="+sc);
                Debug.Log("Actual score==="+score.GetText());
                yield return new WaitForSeconds(2);
                //sc += 10;
            }
            Debug.Log("Final Score: "+score.GetText());
            Assert.AreEqual("Score: "+sc,score.GetText());
        }
        [UnityTest,Order(1)]
        public IEnumerator ScoreInitial()
        {
            GameObject score1 = _arium.FindGameObject("Score");
            Assert.AreEqual("Score: "+finalScore, score1.GetText());
            yield return new WaitForSeconds(2);
        }
        [UnityTest,Order(2)]
        public IEnumerator ShouldDestroyCollectable()
        {
            
                yield return new WaitForSeconds(1);
                const string sphereObjectName = "Cueball";
                    Transform cubeTransform = _arium.GetComponent<Transform>("Cube(Clone)");
                    Transform sphereTransform = _arium.GetComponent<Transform>(sphereObjectName);
                    sphereTransform.transform.position = cubeTransform.transform.position;
                    finalScore += 10;
        }
        [UnityTest,Order(3)]
        public IEnumerator ScoreUpdated()
        {
            GameObject score2 = _arium.FindGameObject("Score");
            Assert.AreEqual("Score: "+finalScore, score2.GetText());
            Debug.Log(finalScore+" "+score2.GetText());
            yield return new WaitForSeconds(2);
        }
    }

}
