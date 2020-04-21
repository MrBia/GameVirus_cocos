#include "Objectt.h"



void Objectt::setBlood(int blood)
{
	this->blood = blood;
}

int Objectt::getBlood()
{
	return this->blood;
}

void Objectt::setLayer(Layer * layer)
{
	this->layer = layer;
}

Layer * Objectt::getLayer()
{
	return this->layer;
}

void Objectt::setSprite(Sprite* sprite)
{
	this->sprite = sprite;
}

Sprite * Objectt::getSprite()
{
	return this->sprite;
}

Objectt::Objectt()
{
}


Objectt::~Objectt()
{
}
