// Lab_02.cpp
// < Пастушук Андрій Русланович >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 0.21
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	cout << "Введiть значення змiнної a:" << endl;
	long double a; // вхідний параметр
	cin >> a; //вводимо віхдний параметр
	long double PI = 4 * atan(1.); // число пі
	long double z1; // результат обчислення 1-го виразу
	//long double z2; // результат обчислення 2-го виразу
	z1 = 2*sin(3 * PI - 2 * a) * sin(3 * PI - 2 * a)* cos(5 * PI + 2 * a) * cos(5 * PI + 2 * a);//обчислення 1-го виразу
	//z2 = (1. / 4) - ((1. / 4) * sin((5. / 2) * PI - 8*a));//обчислення 2-го виразу
	cout << endl;
	cout << "z1 = " << z1 << endl;//виводимо значення 1-го виразу
	//cout << "z2 = " << z2 << endl;//виводимо значення 2-го виразу
	cin.get();
	return 0;
}