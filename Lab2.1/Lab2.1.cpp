// Lab_02.cpp
// < �������� ����� ���������� >
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 0.21
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	cout << "����i�� �������� ��i��� a:" << endl;
	long double a; // ������� ��������
	cin >> a; //������� ������ ��������
	long double PI = 4 * atan(1.); // ����� �
	long double z1; // ��������� ���������� 1-�� ������
	//long double z2; // ��������� ���������� 2-�� ������
	z1 = 2*sin(3 * PI - 2 * a) * sin(3 * PI - 2 * a)* cos(5 * PI + 2 * a) * cos(5 * PI + 2 * a);//���������� 1-�� ������
	//z2 = (1. / 4) - ((1. / 4) * sin((5. / 2) * PI - 8*a));//���������� 2-�� ������
	cout << endl;
	cout << "z1 = " << z1 << endl;//�������� �������� 1-�� ������
	//cout << "z2 = " << z2 << endl;//�������� �������� 2-�� ������
	cin.get();
	return 0;
}