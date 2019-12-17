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

	CreateBridge({ 0,0.75,0 }, { 25,0.25,2 }, Brown);
	CreateBox({ 10,1.5,0 }, { 1,3,1 }, Blue);
	CreateBox({ 10,1.5,3 }, { 1,3,1 }, White);
	CreateBox({ 10,1.5,6 }, { 1,3,1 }, Blue);
	CreateBox({ 10,1.5,9 }, { 1,3,1 }, White);
	CreateBox({ 10,1.5,12 }, { 1,3,1 }, Blue);
	CreateBox({ 10,1.5,15 }, { 1,3,1 }, White);
	CreateBox({ 10,1.5,18 }, { 1,3,1 }, Blue);
	CreateBox({ 10,1.5,21 }, { 1,3,1 }, White);
	CreateBox({ 10,1.5,24 }, { 1,3,1 }, Blue);
	CreateBox({ 10,1.5,27 }, { 1,3,1 }, White);
	CreateBox({ 10,1.5,30 }, { 1,3,1 }, Blue);
	CreateBox({ 10,1.5,33 }, { 1,3,1 }, White);
	CreateBox({ 10,1.5,36 }, { 1,3,1 }, Blue);
	CreateBox({ 10,1.5,39 }, { 1,3,1 }, White);
	CreateBox({ 10,1.5,42 }, { 1,3,1 }, Blue);
	CreateBox({ 10,1.5,45 }, { 1,3,1 }, White);
	CreateBox({ 10,1.5,48 }, { 1,3,1 }, Blue);
	CreateBox({ 10,1.5,51 }, { 1,3,1 }, White);
	CreateBox({ 10,1.5,54 }, { 1,3,1 }, Blue);
	CreateBox({ 10,1.5,57 }, { 1,3,1 }, White);
	CreateBox({ 10,1.5,60 }, { 1,3,1 }, Blue);
	CreateBox({ -10,1.5,0 }, { 1,3,1 }, Blue);
	CreateBox({ -10,1.5,3 }, { 1,3,1 }, White);
	CreateBox({ -10,1.5,6 }, { 1,3,1 }, Blue);
	CreateBox({ -10,1.5,9 }, { 1,3,1 }, White);
	CreateBox({ -10,1.5,12 }, { 1,3,1 }, Blue);
	CreateBox({ -10,1.5,15 }, { 1,3,1 }, White);
	CreateBox({ -10,1.5,18 }, { 1,3,1 }, Blue);
	CreateBox({ -10,1.5,21 }, { 1,3,1 }, White);
	CreateBox({ -10,1.5,24 }, { 1,3,1 }, Blue);
	CreateBox({ -10,1.5,27 }, { 1,3,1 }, White);
	CreateBox({ -10,1.5,30 }, { 1,3,1 }, Blue);
	CreateBox({ -10,1.5,33 }, { 1,3,1 }, White);
	CreateBox({ -10,1.5,36 }, { 1,3,1 }, Blue);
	CreateBox({ -10,1.5,39 }, { 1,3,1 }, White);
	CreateBox({ -10,1.5,42 }, { 1,3,1 }, Blue);
	CreateBox({ -10,1.5,45 }, { 1,3,1 }, White);
	CreateBox({ -10,1.5,48 }, { 1,3,1 }, Blue);
	CreateBox({ -10,1.5,51 }, { 1,3,1 }, White);
	CreateBox({ -10,1.5,54 }, { 1,3,1 }, Blue);
	CreateBox({ -10,1.5,57 }, { 1,3,1 }, White);
	CreateBox({ -10,1.5,60 }, { 1,3,1 }, Blue);

	CreateBox({ -9.5,1.5,63 }, { 1,3,1 }, White);
	CreateBox({ -9,1.5,66 }, { 1,3,1 }, Blue);
	CreateBox({ -8.5,1.5,69 }, { 1,3,1 }, White);
	CreateBox({ -7.5,1.5,72 }, { 1,3,1 }, Blue);
	CreateBox({ -6,1.5,74 }, { 1,3,1 }, White);
	CreateBox({ -4.5,1.5,76 }, { 1,3,1 }, Blue);
	CreateBox({ -2,1.5,78 }, { 1,3,1 }, White);
	CreateBox({ 1,1.5,79.5 }, { 1,3,1 }, Blue);
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

	RenderBox({ 10,1.5,0 }, { 1,3,1 }, Blue);
	RenderBox({ 10,1.5,3 }, { 1,3,1 }, White);
	RenderBox({ 10,1.5,6 }, { 1,3,1 }, Blue);
	RenderBox({ 10,1.5,9 }, { 1,3,1 }, White);
	RenderBox({ 10,1.5,12 }, { 1,3,1 }, Blue);
	RenderBox({ 10,1.5,15 }, { 1,3,1 }, White);
	RenderBox({ 10,1.5,18 }, { 1,3,1 }, Blue);
	RenderBox({ 10,1.5,21 }, { 1,3,1 }, White);
	RenderBox({ 10,1.5,24 }, { 1,3,1 }, Blue);
	RenderBox({ 10,1.5,27 }, { 1,3,1 }, White);
	RenderBox({ 10,1.5,30 }, { 1,3,1 }, Blue);
	RenderBox({ 10,1.5,33 }, { 1,3,1 }, White);
	RenderBox({ 10,1.5,36 }, { 1,3,1 }, Blue);
	RenderBox({ 10,1.5,39 }, { 1,3,1 }, White);
	RenderBox({ 10,1.5,42 }, { 1,3,1 }, Blue);
	RenderBox({ 10,1.5,45 }, { 1,3,1 }, White);
	RenderBox({ 10,1.5,48 }, { 1,3,1 }, Blue);
	RenderBox({ 10,1.5,51 }, { 1,3,1 }, White);
	RenderBox({ 10,1.5,54 }, { 1,3,1 }, Blue);
	RenderBox({ 10,1.5,57 }, { 1,3,1 }, White);
	RenderBox({ 10,1.5,60 }, { 1,3,1 }, Blue);
	RenderBox({ -10,1.5,0 }, { 1,3,1 }, Blue);
	RenderBox({ -10,1.5,3 }, { 1,3,1 }, White);
	RenderBox({ -10,1.5,6 }, { 1,3,1 }, Blue);
	RenderBox({ -10,1.5,9 }, { 1,3,1 }, White);
	RenderBox({ -10,1.5,12 }, { 1,3,1 }, Blue);
	RenderBox({ -10,1.5,15 }, { 1,3,1 }, White);
	RenderBox({ -10,1.5,18 }, { 1,3,1 }, Blue);
	RenderBox({ -10,1.5,21 }, { 1,3,1 }, White);
	RenderBox({ -10,1.5,24 }, { 1,3,1 }, Blue);
	RenderBox({ -10,1.5,27 }, { 1,3,1 }, White);
	RenderBox({ -10,1.5,30 }, { 1,3,1 }, Blue);
	RenderBox({ -10,1.5,33 }, { 1,3,1 }, White);
	RenderBox({ -10,1.5,36 }, { 1,3,1 }, Blue);
	RenderBox({ -10,1.5,39 }, { 1,3,1 }, White);
	RenderBox({ -10,1.5,42 }, { 1,3,1 }, Blue);
	RenderBox({ -10,1.5,45 }, { 1,3,1 }, White);
	RenderBox({ -10,1.5,48 }, { 1,3,1 }, Blue);
	RenderBox({ -10,1.5,51 }, { 1,3,1 }, White);
	RenderBox({ -10,1.5,54 }, { 1,3,1 }, Blue);
	RenderBox({ -10,1.5,57 }, { 1,3,1 }, White);
	RenderBox({ -10,1.5,60 }, { 1,3,1 }, Blue);

	return UPDATE_CONTINUE;
}

void ModuleSceneIntro::OnCollision(PhysBody3D* body1, PhysBody3D* body2)
{
}


void ModuleSceneIntro::CreateBox(vec3 offset, vec3 size, Color color) {

	Cube cube;
	cube.size = size;
	cube.SetPos(offset.x, offset.y, offset.z);
	cube.color = color;
	cube.SetRotation(45, {0,1,0});
	App->physics->AddBody(cube, 8000);
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