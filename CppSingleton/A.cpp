#include "A.h"
#include <iostream>
#include <thread>
#include <Windows.h>

A::A()
{
	std::cout << "A 持失切" << std::endl;
}


A::~A()
{
	std::cout << "A 社瑚切" << std::endl;
}


void A::test1()
{
	std::cout << "A" << std::endl;
}