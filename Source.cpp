#include <Windows.h>
#include <iostream>
#include "B.h"
#include "D1.h"
#include "D2.h"
#include "D3.h"
#include "D4.h"
#include "D5.h"
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	B o0(777);
	cout << "B o0(777);" << endl;
	cout << "sizeof(B) = " << sizeof(B) << endl;
	cout << endl << "Ієрархія класу B: " << endl;
	o0.Show_B();
	D1 o1(111, 222);
	cout << "D1 o1(111, 222);" << endl;
	cout << "sizeof(D1) = " << sizeof(D1) << endl;
	cout << endl << "Ієрархія класу D1: " << endl;
	o1.Show_D1();
	D2 o2(1000, 2000);
	cout << "D2 o2(1000, 2000);" << endl;
	cout << "sizeof(D2) = " << sizeof(D2) << endl;
	cout << endl << "Ієрархія класу D2: " << endl;
	o2.Show_D2();
	D3 o3(100, 200);
	cout << "D3 o3(100, 200, 300, 400, 500);" << endl;
	cout << "sizeof(D3) = " << sizeof(D3) << endl;
	cout << endl << "Ієрархія класу D3: " << endl;
	o3.Show_D3();
	D4 o4(1, 2, 3, 4, 5);
	cout << "D4 o4(1, 2, 3, 4, 5);" << endl;
	cout << "sizeof(D4) = " << sizeof(D4) << endl;
	cout << endl << "Ієрархія класу D4: " << endl;
	o4.Show_D4();
	D5 o5(10, 11, 12, 13, 14);
	cout << "D5 o5(10, 11, 12, 13, 14);" << endl;
	cout << "sizeof(D5) = " << sizeof(D5) << endl;
	cout << endl << "Ієрархія класу D5: " << endl;
	o5.Show_D5();
	return 0;
}