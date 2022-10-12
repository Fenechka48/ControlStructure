//LOOPS
#include <iostream>
#include <conio.h> //здесь находится функция _getch()
using namespace std;
//#define WHILE_1
//#define WHILE_2
//#define PALINDROME
// #define Escape 27



void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE_1
	int n;
	int i = 0;
	cout << "введите количество итераций:"; cin >> n;


	while (i < n)
	{
		cout << i << "Hello World\n";
		i++;// шаг цикла
	}
#endif WHILE_1
#ifdef WHILE_2
	int n; // колличество итераций
	cout << "Колличество итераций:"; cin >> n;
	while (n)
	{
		cout << n-- << "\t";
		//n--;
	}
	cout << endl;
#endif // WHILE_2
#ifdef PALINDROM

	int number;
	int revers = 0;// число записанное задам на перед
	cout << "ВВедите число:"; cin >> number;
	int buffer = number; //копия числа, введенное с клавиатуры
		//эта копия нужна для того, чтобы исходные данные, ввведенные пользователем
		//остались неизменны
	while (buffer)
	{
		revers *= 10;// освобождаем место для следующего младшего разряда
		revers += buffer % 10; //получаем младший разряд числа;
		buffer /= 10;//удаляем полученный ранее младший разряд
	}
	cout << number << endl;
	cout << revers << endl;
	if (revers == number)
	{
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Число не палиндром" << endl;
	}
#endif // PALINDROM
#ifdef Escape 27
	char key;//эта переменная будет хранить код клавиши
	do
	{
		key = _getch();// функция _getch() ожидает нажатие
		//и возвращает acke код по нажатию клавиши
		cout << (int)key << "\t" << key << endl;
		//(int)key-явное преобразование переменной 'key'в тип данных 'int'
		// для того чтобы увидеть код нажатой клавиши.
	} while (key != Escape);
#endif // Escape 27



}