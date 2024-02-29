using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent (typeof (Rigidbody))]

public class GravityPlayer : MonoBehaviour
{
    GravityPlanet planet;
	Rigidbody rigidbody;
	
	void Awake () {
		planet = GameObject.FindGameObjectWithTag("Ground").GetComponent<GravityPlanet>();
		rigidbody = GetComponent<Rigidbody> ();

		// Disable rigidbody gravity and rotation as this is simulated in GravityPlanet script
		rigidbody.useGravity = false;
		rigidbody.constraints = RigidbodyConstraints.FreezeRotation;
	}
	
	void FixedUpdate () {
		// Allow this body to be influenced by planet's gravity
		planet.Attract(rigidbody);
	}
}
