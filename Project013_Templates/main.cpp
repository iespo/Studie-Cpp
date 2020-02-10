#include<iostream>
using namespace std;

/* Templates - Ўаблоны*/

//template<typename T>
//T Sum(T a, T b)
//{
//	return a + b;			//T + T
//}

//!!! typename = class - это одно и то же

template<typename T1, typename T2>
T2 Sum(T1 a, T2 b)
{
	return a + b;			//T1 + T2
}

template<typename T1, typename T2>
void Foo(T1 a, T2 b)
{
	cout << a << endl;
	cout << b << endl;
}

void main(void)
{
	setlocale(LC_ALL, "rus");
	//setlocale(LC_ALL, "de");

	cout << Sum(3, 5) << endl;		//int + int
	cout << Sum(3.3, 5.2) << endl;	//double + double

	cout << Sum(7, 5.4) << endl;	//int + double
	
	Foo(555, "Priwet!");


	system("pause");
}