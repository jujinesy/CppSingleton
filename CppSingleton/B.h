#pragma once
#include <thread>
#include "CppSingleton.h"

class B : public CppSingleton <B>
{
public:
	B();
	~B();
	void test1();
	void test2();
	void th();
	std::thread::native_handle_type HW;
};

