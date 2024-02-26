#pragma once
#include "Zerg.h"
class Zuggling : public Zerg
{
public:
	Zuggling();
	~Zuggling();
	
	virtual void Recovery() override;
};

