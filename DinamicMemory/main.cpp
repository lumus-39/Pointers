#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);//передаем массив в функцию
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n]; //оператор new выделяет динамическую память
	
	FillRand(arr, n);//вызываем функции
	Print(arr, n);

	delete[] arr; // удаляет массив из памяти
}

void FillRand(int arr[], const int n)//реализуем функции
{
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}