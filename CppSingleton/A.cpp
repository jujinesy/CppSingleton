#include "A.h"
#include <iostream>
#include <thread>
#include <Windows.h>

A::A()
{
	std::cout << "A ������" << std::endl;
}


A::~A()
{
	std::cout << "A �Ҹ���" << std::endl;
}


void A::test1()
{
	std::cout << "A" << std::endl;
}