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

	createJoystick(this);

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

void GamePlay::createJoystick(Layer* layer)
{
	auto thumb = Sprite::create("Joystick/thumb.png");
	auto joystick = Sprite::create("Joystick/joystick.png");
	Rect joystickBaseDimensions = Rect(0, 0, 40.f, 40.0f);
	Point joystickBasePosition;
	joystickBasePosition = Vec2(MARGIN_JOYSTICK + thumb->getBoundingBox().size.width / 2 + joystick->getBoundingBox().size.width / 2
		, MARGIN_JOYSTICK + thumb->getBoundingBox().size.height / 2 + joystick->getBoundingBox().size.height / 2);

	joystickBase = new SneakyJoystickSkinnedBase();
	joystickBase->init();
	joystickBase->setPosition(Vec2(100, 100));
	joystickBase->setBackgroundSprite(thumb);
	joystickBase->setAnchorPoint(Vec2(0, 0));
	joystickBase->setThumbSprite(joystick);
	joystickBase->getThumbSprite()->setScale(0.2f);
	joystickBase->setScale(1.0f);
	joystick->setScale(0.5f);
	SneakyJoystick *aJoystick = new SneakyJoystick();
	aJoystick->initWithRect(joystickBaseDimensions);
	aJoystick->autorelease();
	joystickBase->setJoystick(aJoystick);
	joystickBase->setPosition(Vec2(100, 100));

	auto leftJoystick = joystickBase->getJoystick();
	auto activeRunRange = thumb->getBoundingBox().size.height / 2;

	auto layerr = Layer::create();
	layerr->addChild(joystickBase);


	// btn Fire
	auto btnFire = ui::Button::create("Joystick/fire_normal.png", "Joystick/fire_press.png");
	btnFire->setPosition(Vec2(200, 100));
	//btnFire->addTouchEventListener(CC_CALLBACK_2(GamePlay::Fire, this));
	layerr->addChild(btnFire);

	layer->addChild(layerr);
}