#include "Zuggling.h"

Zuggling::Zuggling()
{
	health = 35;
	maxHP = health;

}

Zuggling::~Zuggling()
{
	cout << "Release Zuggling" << endl;
}

void Zuggling::Recovery()
{
	health = maxHP;
}
