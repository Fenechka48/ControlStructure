#include <iostream>
using namespace std;
using std::cout;
using std::endl;
using std::cin;

//#define SINTACSIS
//#define FACTORIAL
//#define STEPEN
//#define Fact_2
//#define ASCII
//#define FIBONACHI
//#define FIBONACHI_TWO
//#define STEPEN_2   
//#define Fact_2
//#define ASCII_2
//#define FIB_4
#define MULTIPLICATION_TABLE
void main()
{
	setlocale(LC_ALL, "");
#ifdef SINTACSIS
	int n;
	cout << "Введите количество итераций:"; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif // SINTACSIS
#ifdef FACTORIAL
	int  number, i;
	long fact;
	fact = 1;
	cout << "Введите любое натуральное число, для вычисления факториала:\t" << endl; cin >> number;
	int buffer = number;
	if (number < 0)
	{
		cout << "Error:введите натуральное число" << endl;
	}
	else if (number > 0)
	{
		for (i = 1; i <= number; i++)
		{
			//fact *= i;
			fact *= buffer;
			buffer -= 1;
		}
		cout << "Факториал=\t" << fact << endl;
	}

#endif // FACTORIAL
#ifdef STEPEN
	int base, power, i;
	double res;
	res = 1;
	cout << "Возведение в степень\t" << endl;
	cout << "Введите основу числа: "; cin >> base;
	cout << "Введите степень числа: "; cin >> power;
	if (power >= 0)
	{
		for (i = 1; i <= power; i++)
		{
			res *= base;
		}
		cout << " Ответ: " << res << endl;
	}
	else if (power < 0)
	{
		res *= base;
		res = 1 / res;
	}
	cout << " Ответ: " << res << endl;
#endif // STEPEN
#ifdef ASCII

	char i;
	for (int i = 0; i <= 256; i++)
	{
		
		if (i % 16)
		{
			cout << (char)i << endl;
		}
	}


#endif // ASCII
#ifdef FIBONACHI
	int  fib, n, i, f_0, f_1;
	f_0 = 0;
	f_1 = 1;
	n = 0;
	fib = 1;
	cout << "Обозначьте предел последовательности Фибоначчи: "; cin >> n;
	for (i = 0; i <= n; ++i)
	{
		fib = f_0 + f_1;
		f_0 = f_1;
		f_1 = fib;

		if (fib <= n)
		{
			cout << fib << "\t";
		}
	}

#endif // FIBONACHI
#ifdef FIBONACHI_TWO
	int  fib, n, i, f_0, f_1;
	f_0 = 0;
	f_1 = 1;
	n = 0;
	fib = 1;
	cout << "Обозначьте предел последовательности Фибоначчи: "; cin >> n;
	if (n >= 0)
	{
		for (i = 1; i <= n; ++i)
		{
			fib = f_0 + f_1;
			f_0 = f_1;
			f_1 = fib;
			cout << fib << "\t";
		}
	}
	else if (n < 0)
	{
		cout << "Error" << endl;
    } 
#endif // FIBONACHI_TWO
	
	// пока не получилось
	//int n,b,c,i,d;
	//long a = 100;
	//cout << "Укажите предел ряда: "; cin >> n;
	//int buf = a;
		//for (i = 2; i <= n; i++)
		//{
		//	a = i;
		//	b = a % buf;
		//	c = a % 1;
		//	d = a % 2;
		//	if (d==0 || b == 0 || c == 0)
		//	{
		//		cout << a << "\t";
		//	}

#ifdef Fact_2
	int n;
	int f = 1;// Factorial
	cout << "введите число: " << endl; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "!= ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
	cout << n << "!= " << f << endl;
#endif // Fact_2
#ifdef STEPEN_2
	double a;
	int n;
	double N = 1;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << N << endl;
#endif // STEPEN_2
#ifdef ASCII_2
	cout << "Таблица ASCII символов:\n";
	setlocale(LC_ALL, "C"); // включаем кодировку по умолчанию
	for (int i = 0; i < 256; i++)
	{
		if (i % 16 == 0) cout << endl;
		cout << (char)i << " ";
	}

	cout << endl;
	setlocale(LC_ALL, "");
	cout << "Вот и сказочке конец!" << endl;
#endif // ASCII_2
#ifdef FIB_4
	int n;
	cout << "введите предел"; cin >> n;
	for (int a = 0, b = 1, c = a + b; a < n; a = b, b = c, c = a + b)
	{
		cout << a << "\t";
	}
	cout << endl;
#endif // FIB_4

#ifdef MULTIPLICATION_TABLE

	for (int i = 1; i <= 10; i++)
	{
		cout << "Таблица умножения на " << i << ":\n";
		for (int j = 1; j < 10; j++)
		{
			if (i < 10) cout << " ";
			cout << i << " * ";
			if (j < 10) cout << " ";
			cout << j << " = ";
			if (i * j < 100) cout << " ";
			if (i * j < 10) cout << " ";
			cout << i * j << endl;
		}
	}
#endif // MULTIPLICATION_TABLE

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout.width(5);
			// cout<<left;
			cout << right;
			cout << i * j;
		}
		cout << endl;
	}
}