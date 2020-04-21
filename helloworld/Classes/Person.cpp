#include "Person.h"

USING_NS_CC;
void Person::Init()
{
	auto sprite = Sprite::create("HelloWorld.png");
	this->setSprite(sprite);
	this->getLayer()->addChild(this->getSprite());
	this->getSprite()->setPosition(Vec2(100, 100));

	// create physics
	auto physic = PhysicsBody::createBox(this->getSprite()->getContentSize());
	physic->setDynamic(false);
	physic->setRotationEnable(false);
	physic->setGravityEnable(false);
	physic->setContactTestBitmask(1);
	physic->setCollisionBitmask(TAG_PERSON);

	// set physic
	this->getSprite()->setPhysicsBody(physic);
	this->getSprite()->retain();
}

void Person::Update(float deltaTime)
{
}

void Person::attack()
{
	shoot();
}

void Person::shoot()
{

}

Person::Person(Layer* layer)
{
	this->setLayer(layer);
	this->setBlood(BLOOD_PERSON);
	Init();
}


Person::~Person()
{
}
