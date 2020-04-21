#pragma once
#include "Objectt.h"
#include "Person.h"

USING_NS_CC;

class GamePlay : public cocos2d::Layer
{
public:
	static Scene* createGame();
	virtual bool init();
	void update(float deltaTime);

	CREATE_FUNC(GamePlay);
	GamePlay();
	~GamePlay();
};

