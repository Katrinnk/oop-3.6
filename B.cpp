#include "B.h"
#include <iostream>

using namespace std;
B::B():b(0)
{}
B::B(int x)
{
	b = x;
}
void B::Show_B()
{
	cout << "class B:" << endl;
	cout << "show_B()" << endl
		<< "B::b = " << b << endl << endl;
}
