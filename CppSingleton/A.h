#pragma once
#include "CppSingleton.h"

class A : public CppSingleton <A>
{
public:
	A();
	~A();
	void test1();
};

