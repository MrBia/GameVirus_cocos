#include "GamePlay.h"



Scene * GamePlay::createGame()
{
	auto scene = Scene::createWithPhysics();
	scene->getPhysicsWorld()->setDebugDrawMask(PhysicsWorld::DEBUGDRAW_ALL);
	auto layer = GamePlay::create();
	scene->addChild(layer);

	return scene;
}

bool GamePlay::init()
{
	if (!Layer::init()) {
		return false;
	}

	Objectt* person = new Person(this);
	return true;
}

void GamePlay::update(float deltaTime)
{
}

GamePlay::GamePlay()
{
}


GamePlay::~GamePlay()
{
}
