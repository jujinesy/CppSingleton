#include "B.h"
#include <iostream>
#include <thread>
#include <Windows.h>

B::B()
{
}


B::~B()
{
}


void B::test1()
{
	std::cout << "B" << std::endl;
}

void B::test2()
{
	run_flag = true;
	while (run_flag)
	{
		std::cout << "Thread test2" << std::endl;
		Sleep(1000);
	}
		
}

void B::th()
{
	std::cout << "쓰레드 시작" << std::endl;
	std::thread t1(&B::test2, this);
	std::cout << "native_handle은 " << t1.native_handle() << std::endl;
	HW = t1.native_handle();
	//TerminateThread(HW, 0);
	t1.detach();
}