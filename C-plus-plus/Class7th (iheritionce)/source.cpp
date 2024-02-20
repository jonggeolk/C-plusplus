﻿#include <iostream>
#include <stdarg.h>
#include "../Program/Marine.h"
#include "../Program/Unit.h"


using namespace std;

class Mouse
{
public:
	Mouse()
	{
		cout << "Create Mouse" << endl;

	}
	~Mouse()
	{
		cout << "Realase Mouse" << endl;
	}
	void OnDrag()
	{
		cout << "Drag" << endl;
	}
	void Connect()
	{
		cout << "Connect Mouse" << endl;
	}
};

class Keybord
{
public:
	Keybord()
	{
		cout << "Create Keybord" << endl;
	}
	~Keybord()
	{
		cout << "Realase Keybord" << endl;
	}
	void Typing()
	{
		cout << "Typing" << endl;
	}
	void Connect()
	{
		cout << "Keybord Connect" << endl;
	}
};

class Computer : public Mouse, public Keybord
{
public:

	Computer()
	{
		cout << "Create Computer" << endl;
	}
	~Computer()
	{
		cout << "Release Conputer" << endl;
	}
	void Use()
	{
		Typing();
		OnDrag();

		Mouse::Connect();
		Keybord::Connect();
	}
};

// Debug(2,10,20)
// Debuf(3,10,20,30)

void Debug(int count, ...) // ... <- 가변길이 매개변수 문법
{
	// va_list  : 가변 인자 목록으로 가변 인자의
	//			  메모리 주소를 저장하는 포인터입니다.

	va_list vaList; // 가변 인자 목록 포인터

	// va_start : 가변 인자의 시작 주소를 가져오는 변수입니다.

	va_start(vaList, count); // 가변 인자 목록 포인터 설정

	// va_arg   : 가변 인자 포인터에서 특정 자료형의 크기만큼 
	//            이동하는 변수이고, 값을 반환하는 변수입니다.

	for (int i = 0; i < count; i++)
	{
		// int 크기만큼 가변 인자 목록 포인터에서 값을 반환합니다.
		cout << va_arg(vaList, int) << " ";
	}


	// va_end   : 가변 인자 처리가 끝났을 때 포인터를 NULL로
	//	          초기화 하는 변수입니다.

	va_end(vaList); // 가변 인자 목록 포인터를 NULL로 초기화합니다.
}

int main()
{

#pragma region 상속
	//상위 클래스의 속성을 하위 클래스가 사용할 수 있도록
	//설정해주는 기능입니다.

 //   Unit unit;
	//
	//cout << "unit 오브젝트의 크기 : " << sizeof(unit) << endl;
	//
	//Marine marine;
	//
	//cout << "marine 오브젝트의 크기 : " << sizeof(marine) << endl;

	//클래스의 상속 관계에서 상위 클래스는 하위 클래스의 속성을 사용할 
	//수 없으며, 하위 클래스는 상위 클래스의 메모리를 포함한 상태로
	//메모리의 크기가 결정됩니다.

#pragma endregion

#pragma region 다중 상속
	// 하나의 하위 클래스가 여러 개의 상위 클래스를
	// 상속 받는 것입니다.

	//Computer computer;
	//
	//computer.Use();

	// 다중 상속은 여러 개의 상위 클래스에 중복되는 속성이
	// 존재할 수 있기 때문에 범위 지정 연산자를 통해 상위 
	// 클래스의 이름을 성너하고 속성을 사용해야 합니다.
#pragma endregion

#pragma region 가변길이 매개변수

	//Debug(1, 10);
	//
	//cout << endl;

	//Debug(2, 10, 20);

	//cout << endl;

	//Debug(3, 10, 20, 30);

	//cout << endl;

	//Debug(4, 10, 20, 30, 40);

	//cout << endl;

	//Debug(5, 10, 20, 30, 40, 50);

	//cout << endl;
#pragma endregion

	return 0;
}
