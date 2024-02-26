#include "Hydra.h"

Hydra::Hydra()
{
	health = 80;
	maxHP = health;
}

Hydra::~Hydra()
{
	cout << "Relese Hydra" << endl;
}

void Hydra::Recovery()
{
	health = maxHP;
}
