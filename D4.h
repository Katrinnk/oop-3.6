#pragma once
#include "D1.h"
#include "D2.h"
class D4:private D1, public D2
{
	int d4;
public:
	D4(int, int, int, int, int);
	void Show_D4();
};

