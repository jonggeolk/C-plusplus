#include "Bank.h"

void Bank::Withdrawal(Character& character, int money)
{
	bankmoney += money;
	character.money -= money;
}

void Bank::Show()
{
	std::cout << "Bank Money" << bankmoney << std::endl;
}
