#pragma once
#include "A.h"
#include "B.h"
#include <thread>
#include <iostream>
#include <Windows.h>

int main()
{
	std::cout << "���� ����" << std::endl;
	A::Instance()->test1();
	A::destroyInstance();

	B::Instance()->test1();
	B::Instance()->th();
	Sleep(5000);
	std::cout << "������ ����" << std::endl;
	B::destroyInstance();

	getchar();
	return 0;
}