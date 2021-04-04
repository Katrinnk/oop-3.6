#include "D3.h"
#include <iostream>
using namespace std;
D3::D3(int x, int y) :B(y)
{
	d3 = x;
}
void D3::Show_D3()
{
	cout << "class D3: " << endl;
	Show_B();
	cout << "show_D3: " << endl
		<< "D3::d3 = " << d3 << endl << endl;
}
