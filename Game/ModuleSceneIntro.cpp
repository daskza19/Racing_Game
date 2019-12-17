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

	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,0 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,3 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,6 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,9 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,12 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,15 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,18 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,21 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,24 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,27 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,30 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,33 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,36 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,39 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,42 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,45 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,48 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,51 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,54 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 10,1.5,57 }, { 1,3,1 }, White);

	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,0 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,3 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,6 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,9 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,12 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,15 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,18 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,21 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,24 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,27 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,30 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,33 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,36 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,39 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,42 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,45 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,48 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,51 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,54 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,57 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ -10,1.5,60 }, { 1,3,1 }, Blue);

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
	CreateBox(45, { 0, 1, 0 }, { 42, 2,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 45, 2.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 48, 3,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 51, 3.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 54, 4,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 57, 4.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 60, 5,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 63, 5.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 66, 6,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 69, 6.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 72, 7,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 75, 7.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 78, 8,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 81, 8.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 84, 9,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 87, 9.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 90, 10,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 93, 10.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 96, 11,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 99, 11.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 102,12,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 105,12.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 108,13,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 111,13.5,78 }, { 1,3,1 }, Blue);
	CreateBox(45, { 0, 1, 0 }, { 114,14,78 }, { 1,3,1 }, White);
	CreateBox(45, { 0, 1, 0 }, { 117,14.5,78 }, { 1,3,1 }, Blue);

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
	CreateBox(45,{ 0, 1, 0 },{ 42, 2,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 45, 2.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 48, 3,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 51, 3.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 54, 4,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 57, 4.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 60, 5,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 63, 5.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 66, 6,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 69, 6.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 72, 7,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 75, 7.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 78, 8,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 81, 8.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 84, 9,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 87, 9.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 90, 10,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 93, 10.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 96, 11,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 99, 11.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 102,12,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 105,12.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 108,13,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 111,13.5,60 }, { 1,3,1 }, Blue);
	CreateBox(45,{ 0, 1, 0 },{ 114,14,60 }, { 1,3,1 }, White);
	CreateBox(45,{ 0, 1, 0 },{ 117,14.5,60 }, { 1,3,1 }, Blue);

	CreateBox(0,{ 0, 1, 0 },{ 42,0.5,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 45,1,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 48,1.5,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 51,2,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 54,2.5,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 57,3,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 60,3.5,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 63,4,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 66,4.5,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 69,5,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 72,5.5,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 75,6,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 78,6.5,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 81,7,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 84,7.5,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 87,8,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 90,8.5,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 93,9,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 96,9.5,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 99,10,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 102,10.5,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 105,11,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 108,11.5,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 111,12,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 114,12.5,69 }, { 3,0.5,20 }, Brown);
	CreateBox(0,{ 0, 1, 0 },{ 117,13,69 }, { 3,0.5,20 }, Brown);

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