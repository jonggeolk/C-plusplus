#pragma once
#include <iostream>

using namespace std;

class Zerg
{
protected:
	int health;
	int maxHP;
public:
	Zerg();
	~Zerg();
	
	int GetHP();
	void SetHP(int health);

	virtual void Recovery();

};

