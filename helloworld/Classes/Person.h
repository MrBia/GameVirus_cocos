#pragma once
#include "Objectt.h"
class Person :
	public Objectt
{
public:
	void Init();
	void Update(float deltaTime);
	void attack();
	void shoot();
	Person(Layer* layer);
	~Person();
};

