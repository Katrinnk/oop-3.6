#pragma once
#include "D2.h"
#include "D3.h"
class D5:public D2, private D3
{
	int d5;
public:
	D5(int, int, int, int, int);
	void Show_D5();
};

