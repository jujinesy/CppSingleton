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
	bool run_flag;
	std::thread::native_handle_type HW;
};

