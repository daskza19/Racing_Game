#pragma once

#include "PhysBody3D.h"
#include "glmath.h"

class btRaycastVehicle;
struct PhysBody3D;

struct Wheel
{
	vec3 connection; // origin of the ray. Must come from within the chassis
	vec3 direction; 
	vec3 axis;
	float suspensionRestLength; // max length for suspension in meters
	float radius;
	float width;
	bool front; // is front wheel ?
	bool drive; // does this wheel received engine power ?
	bool brake; // does breakes affect this wheel ?
	bool steering; // does this wheel turns ?
};

struct VehicleInfo
{
	~VehicleInfo();
	
	vec3 chassis_size;
	vec3 chassis_offset;
	vec3 leftwall_size;
	vec3 leftwall_offset;
	vec3 rightwall_size;
	vec3 rightwall_offset;
	vec3 frontwall_size;
	vec3 frontwall_offset;
	vec3 backwall_size;
	vec3 backwall_offset;

	vec3 techo_size;
	vec3 techo_offset;
	vec3 stick1_size;
	vec3 stick1_offset;
	vec3 stick2_size;
	vec3 stick2_offset;
	vec3 stick3_size;
	vec3 stick3_offset;
	vec3 stick4_size;
	vec3 stick4_offset;

	vec3 chairs_size;
	vec3 chairs_offset;

	vec3 matricula_size;
	vec3 matricula_offset;
	vec3 light1_size;
	vec3 light1_offset;
	vec3 light2_size;
	vec3 light2_offset;

	float mass;
	float suspensionStiffness; // default to 5.88 / 10.0 offroad / 50.0 sports car / 200.0 F1 car
	float suspensionCompression; // default to 0.83
	float suspensionDamping; // default to 0.88 / 0..1 0 bounces / 1 rigid / recommended 0.1...0.3
	float maxSuspensionTravelCm; // default to 500 cm suspension can be compressed
	float frictionSlip; // defaults to 10.5 / friction with the ground. 0.8 should be good but high values feels better (kart 1000.0)
	float maxSuspensionForce; // defaults to 6000 / max force to the chassis

	Wheel* wheels;
	int num_wheels;
};


struct PhysVehicle3D : public PhysBody3D
{
public:
	PhysVehicle3D(btRigidBody* body, btRaycastVehicle* vehicle, const VehicleInfo& info);
	~PhysVehicle3D();

	void Render();
	void ApplyEngineForce(float force);
	void Brake(float force);
	void Turn(float degrees);
	float GetKmh() const;
	void ResetVelocityAndRotation();

public:

	VehicleInfo info;
	btRaycastVehicle* vehicle;
};