#include "D4.h"
#include <iostream>
using namespace std;
D4::D4(int x, int y, int z, int i, int j) :D1(y, z),D2(i,j)
{
	d4 = x;
}
void D4::Show_D4()
{
	cout << "class D4:" << endl;
	Show_D1();
	Show_D2();
	cout << "show_D4: " << endl
		<< "D4::d4 = " << d4 << endl << endl;
}