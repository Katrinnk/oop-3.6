#include "D5.h"
#include <iostream>
using namespace std;
D5::D5(int x, int y, int z, int i, int j) :D2(y, z), D3(i, j)
{
	d5 = x;
}
void D5::Show_D5()
{
	cout << "class D5: " << endl;
	Show_D2();
	Show_D3();
	cout << "show_D5:" << endl
		<< "D5::d5 = " << d5 << endl << endl;
}