#pragma once
#include "A.h"
#include "B.h"
#include <thread>
#include <iostream>
#include <Windows.h>

int main()
{
	std::cout << "���� ����" << std::endl;
	A::GetInstance()->test1();
	B::GetInstance()->test1();
	B::GetInstance()->th();
	Sleep(5000);
	std::cout << "������ ����" << std::endl;
	B::GetInstance()->run_flag = false;
	//Sleep(3000);
	getchar();
	return 0;
}