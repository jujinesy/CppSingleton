#include "B.h"
#include <iostream>
#include <thread>
#include <Windows.h>

B::B()
{
	std::cout << "B ������" << std::endl;
}


B::~B()
{
	std::cout << "B �Ҹ���" << std::endl;
}


void B::test1()
{
	std::cout << "B" << std::endl;
}

void B::test2()
{
	while (m_bInitialized)
	{
		std::cout << "Thread test2" << std::endl;
		Sleep(1000);
	}		
}

void B::th()
{
	std::cout << "������ ����" << std::endl;
	std::thread t1(&B::test2, this);
	std::cout << "native_handle�� " << t1.native_handle() << std::endl;
	HW = t1.native_handle();
	//TerminateThread(HW, 0);
	t1.detach();
}