#pragma once
#include "Mechanic.h"
class SiegeTank :public Mechanic
{
public:
	SiegeTank();
	virtual~SiegeTank();
	
	void Move()override;
};

