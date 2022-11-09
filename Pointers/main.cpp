#include<iostream>
using namespace std;
//#define POINTER_BASICS

void main()
{
	setlocale(LC_ALL, "");

#ifdef POINTER_BASICS
	int a = 2;
	int* pa = &a;
	cout << a << endl; // Вывод значения переменной 'a' на экран
	cout << &a << endl; //взятие адресапеременной 'a' прямо при выводе
	cout << pa << endl;// Вывод на экран адреса переменной а, хранящегося в указателе ра
	cout << *pa << endl;// Разыменование указателя 'pa' и получение значения по адресу

	int* pb;
	int b = 3;
	pb = &b;
#endif // POINTER_BASICS
	
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr + i << "\t";
		cout << *(arr + i) << "\t";
	}
	cout << endl;
}