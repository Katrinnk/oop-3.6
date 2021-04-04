#include "D1.h"
#include <iostream>
using namespace std;
D1::D1(int x, int y) : B(y)
{
	d1 = x;
}
void D1::Show_D1()
{
	cout << "class D1:" << endl;
	Show_B();
	cout << "show_D1()" << endl
		<< "D1::d1 = " << d1 << endl << endl;
}