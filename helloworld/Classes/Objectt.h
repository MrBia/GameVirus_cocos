#pragma once
#include "cocos2d.h"
#include "define.h"

USING_NS_CC;
class Objectt
{
private:
	int blood;
	Layer* layer;
	Sprite* sprite;
public:
	void setBlood(int blood);
	int getBlood();
	void setLayer(Layer* layer);
	Layer* getLayer();
	void setSprite(Sprite* sprite);
	Sprite* getSprite();
	virtual void attack() = 0;
	virtual void Init() = 0;
	virtual void Update(float deltaTime) = 0;
	Objectt();
	~Objectt();
};

