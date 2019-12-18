#include "Globals.h"
#include "Application.h"
#include "ModuleSceneIntro.h"
#include "Primitive.h"
#include "PhysBody3D.h"

ModuleSceneIntro::ModuleSceneIntro(Application* app, bool start_enabled) : Module(app, start_enabled)
{

}

ModuleSceneIntro::~ModuleSceneIntro()
{}

// Load assets
bool ModuleSceneIntro::Start()
{
	LOG("Loading Intro assets");
	bool ret = true;

	App->camera->Move(vec3(1.0f, 1.0f, 0.0f));
	App->camera->LookAt(vec3(0, 0, 0));

	return ret;
}

// Load assets
bool ModuleSceneIntro::CleanUp()
{
	LOG("Unloading Intro scene");

	return true;
}

// Update
update_status ModuleSceneIntro::Update(float dt)
{
	Plane p(0, 1, 0, 0);
	p.axis = true;
	p.Render();

	for (int g = 0; g < 31; g++) {

		if ((int)g % 2 == 0) {
			CreateBox(45, { 0, 1, 0 }, { 10, 1.5,57 - g * 3.0f }, { 1,3,1 }, Blue);
			CreateBox(45, { 0, 1, 0 }, { -10, 1.5,57 - g * 3.0f }, { 1,3,1 }, Blue);
		}
		else {
			CreateBox(45, { 0, 1, 0 }, { 10, 1.5,57 - g * 3.0f }, { 1,3,1 }, White);
			CreateBox(45, { 0, 1, 0 }, { -10, 1.5,57 - g * 3.0f }, { 1,3,1 }, White);
		}
	}

	CreateBox(45,{ 0, 1, 0 },{ -9.5,1.5,63 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ -9,1.5,66 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ -8.5,1.5,69 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ -7,1.5,72 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ -4.5,1.5,74.5 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ -2,1.5,76.25 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 1,1.5,77.5 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 4.5,1.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 7,1.5,78 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,78 }, { 1,3,1 }, Blue);

	CreateBox(45,{ 0, 1, 0 },{ 12, 1.5,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 15, 1.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 18, 1.5,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 21, 1.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 24, 1.5,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 27, 1.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 30, 1.5,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 33, 1.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 36, 1.5,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 39, 1.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 12, 1.5,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 15, 1.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 18, 1.5,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 21, 1.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 24, 1.5,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 27, 1.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 30, 1.5,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 33, 1.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 36, 1.5,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 39, 1.5,60 }, { 1,3,1 }, Blue);

	//FIRST BRIDGE
	for (float i = 0; i < 19; i++) {
		CreateBox(0, { 0, 1, 0 }, { i * 3+42,(float)i/2 + 0.2f,69 }, { 3,0.5,25 }, Brown);
		if ((int)i %2 == 0) {
			CreateBox(45, { 0, 1, 0 }, { i*3+39, i / 2 + 1.5f, 60}, { 1,3,1 }, White);
			CreateBox(45, { 0, 1, 0 }, { i * 3 + 39, i / 2 + 1.5f,78 }, { 1,3,1 }, Blue);
		}
		else {
			CreateBox(45, { 0, 1, 0 }, { i * 3 + 39, i / 2 + 1.5f, 60 }, { 1,3,1 }, Blue);
			CreateBox(45, { 0, 1, 0 }, { i * 3 + 39, i / 2 + 1.5f,78 }, { 1,3,1 }, White);
		}

	}
	for (float i = 19; i > 0; i--) {
		CreateBox(0, { 0, 1, 0 }, { i * -3 + 172.2f,(float)i / 2.07f ,69 }, { 3,0.5,25 }, Brown);
		if ((int)i % 2 == 0) {
			CreateBox(45, { 0, 1, 0 }, { i * -3 + 172.2f, i / 2.05f + 1.5f, 60 }, { 1,3,1 }, White);
			CreateBox(45, { 0, 1, 0 }, { i * -3 + 172.2f, i / 2.05f + 1.5f,78 }, { 1,3,1 }, Blue);
		}
		else {
			CreateBox(45, { 0, 1, 0 }, { i * -3 + 172.2f, i / 2.05f + 1.5f, 60 }, { 1,3,1 }, Blue);
			CreateBox(45, { 0, 1, 0 }, { i * -3 + 172.2f, i / 2.05f + 1.5f,78 }, { 1,3,1 }, White);
		}
	}
	for (float k = 0; k < 6; k++) {
		if(k<5) CreateBox(0, { 0, 1, 0 }, { k * 3.2f + 99.2f,9.2f,69 }, { 3,0.5,25 }, Brown);
		if ((int)k % 2 == 0) {
			CreateBox(45, { 0, 1, 0 }, { k * 3.2f + 96.2f, 10.7f, 60 }, { 1,3,1 }, White);
			CreateBox(45, { 0, 1, 0 }, { k * 3.2f + 96.2f, 10.7f,78 }, { 1,3,1 }, Blue);
		}
		else {
			CreateBox(45, { 0, 1, 0 }, { k * 3.2f + 96.2f, 10.7f, 60 }, { 1,3,1 }, Blue);
			CreateBox(45, { 0, 1, 0 }, { k * 3.2f + 96.2f, 10.7f,78 }, { 1,3,1 }, White);
		}
	}

	//CURVA
	CreateBox(45, { 0, 1, 0 }, { 173, 1.5,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 176, 1.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 179, 1.5,77 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 182, 1.5,75.5 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 184.5, 1.5,73 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 186.5, 1.5,70 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 188, 1.5,67 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 188.5, 1.5,64 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 189, 1.5,61 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 189.5, 1.5,58 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 170, 2,58 }, { 1,3,1 }, White);
	for (int g = 0; g < 30; g++) {

		if ((int)g % 2 == 0) {
			CreateBox(45, { 0, 1, 0 }, { 190, 1.5,55.0f - g * 3.0f }, { 1,3,1 }, Blue);
			if (g < 25) {
				CreateBox(45, { 0, 1, 0 }, { 170, 1.5,55.0f - g * 3.0f }, { 1,3,1 }, Blue);
			}

		}
		else {
			CreateBox(45, { 0, 1, 0 }, { 190, 1.5,55.0f - g * 3.0f }, { 1,3,1 }, White);
			if (g < 25) {
				CreateBox(45, { 0, 1, 0 }, { 170, 1.5,55.0f - g * 3.0f }, { 1,3,1 }, White);
			}
		}
	}

	CreateBox(45, { 0, 1, 0 }, { 189, 1.5,-35 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 186.5, 1.5,-38 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 183, 1.5,-40 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 179, 1.5,-41 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 176, 1.5,-41 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 173, 1.5,-41 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 170, 1.5,-41 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 170, 1.5,-21 }, { 1,3,1 }, White);

	for (int g = 0; g < 19; g++) {

		if ((int)g % 2 == 0) {
			CreateBox(45, { 0, 1, 0 }, { 170 - g * 3.0f, 1.5,-21 }, { 1,3,1 }, White);
			CreateBox(45, { 0, 1, 0 }, { 170 - g * 3.0f, 1.5,-41 }, { 1,3,1 }, Blue);
		}
		else {
			CreateBox(45, { 0, 1, 0 }, { 170 - g * 3.0f, 1.5,-21 }, { 1,3,1 }, Blue);
			CreateBox(45, { 0, 1, 0 }, { 170 - g * 3.0f, 1.5,-41 }, { 1,3,1 }, White);
		}
	}



	for (int g = 0; g < 54; g++) {

		if ((int)g % 2 == 0) {
			CreateBox(45, { 0, 1, 0 }, { 95, 1.5,140.0f - g * 3.0f }, { 1,3,1 }, Blue);
			CreateBox(45, { 0, 1, 0 }, { 115, 1.5,140.0f - g * 3.0f }, { 1,3,1 }, Blue);
		}
		else {
			CreateBox(45, { 0, 1, 0 }, { 95, 1.5,140.0f - g * 3.0f }, { 1,3,1 }, White);
			CreateBox(45, { 0, 1, 0 }, { 115, 1.5,140.0f - g * 3.0f }, { 1,3,1 }, White);
		}
	}



	//CURVA
	CreateBox(45, { 0, 1, 0 }, { 95, 1.5,163 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 99, 1.5,163 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 102, 1.5,163 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 105, 1.5,162 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 108, 1.5,160.5 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 110.5, 1.5,158 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 112.5, 1.5,155 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 114, 1.5,152 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 114.5, 1.5,149 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 115.1, 1.5,146 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 115.5, 1.5,143 }, { 1,3,1 }, Blue);

	for (int g = 0; g < 15; g++) {

		if ((int)g % 2 == 0) {
			CreateBox(45, { 0, 1, 0 }, { 95 - g * 3.0f, 1.5,143 }, { 1,3,1 }, White);
			CreateBox(45, { 0, 1, 0 }, { 95 - g * 3.0f, 1.5,163 }, { 1,3,1 }, Blue);
		}
		else {
			CreateBox(45, { 0, 1, 0 }, { 95 - g * 3.0f, 1.5,143 }, { 1,3,1 }, Blue);
			CreateBox(45, { 0, 1, 0 }, { 95 - g * 3.0f, 1.5,163 }, { 1,3,1 }, White);
		}
	}

	//SECOND BRIDGE
	for (float i = 0; i < 19; i++) {
		CreateBox(0, { 0, 1, 0 }, { i * -3 + 50,(float)i / 2 + 0.2f,153}, { 3,0.5,25 }, Brown);
		if ((int)i % 2 == 0) {
			CreateBox(45, { 0, 1, 0 }, { i * -3 + 50, i / 2 + 1.5f, 143 }, { 1,3,1 }, White);
			CreateBox(45, { 0, 1, 0 }, { i * -3 + 50, i / 2 + 1.5f,163}, { 1,3,1 }, Blue);
		}
		else {
			CreateBox(45, { 0, 1, 0 }, { i * -3 + 50, i / 2 + 1.5f, 143 }, { 1,3,1 }, Blue);
			CreateBox(45, { 0, 1, 0 }, { i * -3 + 50, i / 2 + 1.5f,163 }, { 1,3,1 }, White);
		}
	}
	for (float k = 0; k < 25; k++) {
		CreateBox(0, { 0, 1, 0 }, { k * -3.2f - 7.2f,9.2f,153 }, { 3,0.5,25 }, Brown);
		if ((int)k % 2 == 0) {
			CreateBox(45, { 0, 1, 0 }, { k * -3.2f -7.2f, 10.7f, 163 }, { 1,3,1 }, White);
			CreateBox(45, { 0, 1, 0 }, { k * -3.2f - 7.2f, 10.7f,143}, { 1,3,1 }, Blue);
		}
		else {
			CreateBox(45, { 0, 1, 0 }, { k * -3.2f - 7.2f, 10.7f, 163 }, { 1,3,1 }, Blue);
			CreateBox(45, { 0, 1, 0 }, { k * -3.2f - 7.2f, 10.7f,143 }, { 1,3,1 }, White);
		}
	}
	for (float i = 0; i <19; i++) {
		CreateBox(0, { 0, 1, 0 }, { i * 3 -141.2f,(float)i / 2 + 0.2f,153 }, { 3,0.5,25 }, Brown);
		if ((int)i % 2 == 0) {
			CreateBox(45, { 0, 1, 0 }, { i * 3 - 141.2f, i / 2 + 1.5f, 143 }, { 1,3,1 }, White);
			CreateBox(45, { 0, 1, 0 }, { i * 3 - 141.2f, i / 2 + 1.5f, 163 }, { 1,3,1 }, Blue);
		}
		else {
			CreateBox(45, { 0, 1, 0 }, { i * 3 - 141.2f, i / 2 + 1.5f, 143 }, { 1,3,1 }, Blue);
			CreateBox(45, { 0, 1, 0 }, { i * 3 - 141.2f, i / 2 + 1.5f, 163 }, { 1,3,1 }, White);
		}
	}

	//CreateBox(45, { 0, 1, 0 }, { -162.5, 1.5,143.85 }, { 1,3,1 }, White);
	//CreateBox(45, { 0, 1, 0 }, { -159, 1.5,142.85 }, { 1,3,1 }, Blue);
	//CreateBox(45, { 0, 1, 0 }, { -156, 1.5,141 }, { 1,3,1 }, White);
	//CreateBox(45, { 0, 1, 0 }, { -152, 1.5,138 }, { 1,3,1 }, Blue);
	//CreateBox(45, { 0, 1, 0 }, { -148, 1.5,135 }, { 1,3,1 }, White);
	//CreateBox(45, { 0, 1, 0 }, { -146, 1.5,134 }, { 1,3,1 }, Blue);
	//CreateBox(45, { 0, 1, 0 }, { -145, 1.5, 139.5 }, { 1,3,1 }, White);

	CreateBox(45, { 0, 1, 0 }, { -162.5,1.5,150 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { -161,1.5,153 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { -160,1.5,156 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { -158,1.5,159 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { -155,1.5,161.5 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { -151.5,1.5,163.25 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { -145,1.5,166.5 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { -140,1.5,167 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { -144.5,167 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { -145,1.5,167 }, { 1,3,1 }, Blue);

	for (int g = 0; g < 59; g++) {

		if ((int)g % 2 == 0) {
			CreateBox(45, { 0, 1, 0 }, { -145, 1.5,141.2f - g * 3.0f }, { 1,3,1 }, Blue);
			CreateBox(45, { 0, 1, 0 }, { -165, 1.5,141.2f - g * 3.0f }, { 1,3,1 }, Blue);
		}
		else {
			CreateBox(45, { 0, 1, 0 }, { -145, 1.5,141.2f - g * 3.0f }, { 1,3,1 }, White);
			CreateBox(45, { 0, 1, 0 }, { -165, 1.5,141.2f - g * 3.0f }, { 1,3,1 }, White);
		}
	}

	CreateBox(45, { 0, 1, 0 }, { -164, 1.5,-37.5 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { -163, 1.5,-43 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { -160, 1.5,-47.5 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { -157, 1.5,-51 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { -152, 1.5,-53.5 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { -148, 1.5, -54.5 }, { 1,3,1 }, Blue);

	for (int g = 0; g < 45; g++) {

		if ((int)g % 2 == 0) {
			CreateBox(45, { 0, 1, 0 }, { -145 + g * 3.0f, 1.5, -35}, { 1,3,1 }, White);
			CreateBox(45, { 0, 1, 0 }, { -145 + g * 3.0f, 1.5, -55 }, { 1,3,1 }, White);
		}								
		else {							
			CreateBox(45, { 0, 1, 0 }, { -145 + g * 3.0f, 1.5, -35 }, { 1,3,1 }, Blue);
			CreateBox(45, { 0, 1, 0 }, { -145 + g * 3.0f, 1.5, -55 }, { 1,3,1 }, Blue);
		}
	}



	donecolliders = true;
	return UPDATE_CONTINUE;
}

void ModuleSceneIntro::OnCollision(PhysBody3D* body1, PhysBody3D* body2)
{
}


void ModuleSceneIntro::CreateBox(int nangle,vec3 angle,vec3 offset, vec3 size, Color color) {

	Cube cube;
	cube.size = size;
	cube.SetPos(offset.x, offset.y, offset.z);
	cube.color = color;
	cube.SetRotation(nangle, angle);
	if (donecolliders == false) {
		App->physics->AddBody(cube, 0);
	}
	cube.Render();
}

void ModuleSceneIntro::RenderBox(vec3 offset, vec3 size, Color color) {

	Cube cube;
	cube.size = size;
	cube.SetPos(offset.x, offset.y, offset.z);
	cube.color = color;
	cube.SetRotation(45, { 0,1,0 });
	cube.Render();
}


void ModuleSceneIntro::CreateBridge(vec3 offset, vec3 size, Color color) {
	Cube cube;
	cube.size = size;
	cube.SetPos(offset.x, offset.y, offset.z);
	cube.color = color;

	Cube cube2;
	cube2.size = size;
	cube2.SetPos(offset.x, offset.y, offset.z+2.3);
	cube2.color = color;

	Cube cube3;
	cube3.size = size;
	cube3.SetPos(offset.x, offset.y, offset.z+4.6);
	cube3.color = color;

	Cube cube4;
	cube4.size = size;
	cube4.SetPos(offset.x, offset.y, offset.z+6.9);
	cube4.color = color;

	cube.Render();
	cube2.Render();
	cube3.Render();
	cube4.Render();
}