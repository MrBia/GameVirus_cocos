#pragma once
#include "Objectt.h"
#include "Person.h"
#include "SneakyJoystick.h"
#include "SneakyJoystickSkinnedBase.h"
#include "ui\CocosGUI.h"

USING_NS_CC;

class GamePlay : public cocos2d::Layer
{
private:
	SneakyJoystickSkinnedBase* joystickBase;
public:
	static Scene* createGame();
	virtual bool init();
	void update(float deltaTime);

	void createJoystick(Layer* layer);

	CREATE_FUNC(GamePlay);
	GamePlay();
	~GamePlay();
};

