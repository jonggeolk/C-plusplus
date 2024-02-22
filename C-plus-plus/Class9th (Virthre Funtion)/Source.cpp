﻿#include <iostream>
#include "../Program/Vulture.h"
#include "../Program/SiegeTank.h"
#include "../Program/Goliath.h"

using namespace std;


int main()
{
#pragma region 가상 함수
	// 상속하는 클래스 내에서 같은 형태의 함수로
	// 재정의될 수 있는 함수입니다.

	//Mechanic* mechanic = new Vulture();

	//mechanic->Move();

	//// 가상 함수 실행 시간에 상위 클래스에 대란 참조로
	//// 하위 클래스에 재정의된 함수를 호출할 수 있습니다.

	//cout << "Mechanic의 크기 : " << sizeof(Mechanic) << endl;
#pragma endregion


#pragma region Factory

	//int select = 0;

	//int createCount = 0;

	//Mechanic* mechanic = nullptr;

	//while (createCount < 5)
	//{
	//	cin >> select;
	//	switch (select)
	//	{
	//	case 0: mechanic = new Vulture();
	//		break;
	//	case 1: mechanic = new SiegeTank();
	//		break;
	//	case 2: mechanic = new Goliath();
	//		break;
	//	default: continue;
	//	}
	//	createCount++;
	//	mechanic->Move();
	//}


#pragma endregion

#pragma region 가상소멸자 
	// 객체가 소멸될 때 현재 참조하고 있는 객체와 상관없이
	// 모두 호출되는 소멸자 입니다.

	//Mechanic* unit1 = new Vulture();

	//delete unit1;

	// 상속된 객체가 해제될 때 하위 크랠스의 소멸자가 먼저
	// 실행되고 상위 클래스의 소멸자가 실핼되어야 하기 때문에
	// 실행시간에 메모리에 할당된 객체를 확인하고 차례대로
	// 소멸시켜야합니다.


#pragma endregion


	return 0;
}
