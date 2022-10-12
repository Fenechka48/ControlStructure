#include<iostream>
using namespace std;
using std::cout;
using std::endl;
using std::cin;

//#define TEMPERATURE
//#define TARGET
//#define CALCULATOR
//#define CALL_1
//#define HomeWork
//#define Lucky
int main()
{
	setlocale(LC_ALL, "Rus");
#if defined TEMPERATURE
	int temperature;
	cout << "ВВедите температуру воздуха:"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "На улице тепло" << endl;

	}
	else
	{
		cout << "На улице холодно" << endl;
	}
#endif TEMPERATURE
#if defined TARGET
	int n;
	cout << "Введите число:"; cin >> n;
	if (n > 0 && n < 10)
		cout << "Цель поражена" << endl;
	else
		cout << "Вы промахнулись" << endl;
#endif TARGET
#ifdef CALCULATOR
	double a, b;
	char znak;

	cout << "Введите выражение типа a+b,a-b,a*b,a/b :"; cin >> a >> znak >> b;

	if (znak == '+')
	{
		cout << "Сумма равна:" << a + b << endl;
	}
	else if (znak == '-')
	{
		cout << "Разность равна:" << a - b << endl;
	}

	else if (znak == '*')
	{
		cout << "Произведение равно:" << a * b << endl;
	}
	else if (znak == '/')
	{
		cout << "Частное равно:" << a / b << endl;
	}
	else
	{
		cout << "ошибка" << endl;
	}
#endif CALCULATOR
#if defined CALL_1
	double a, b;
	char s;
	cout << "введите простое арифметическое выражение:" << endl;
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else
		cout << "Error : No operation" << endl;
#endif CALL_1

#ifdef HomeWork

	int c, d;
	char oper;
	cout << "Введите простое арифметическое выражение:" << endl;
	cin >> c >> oper >> d;
	switch (oper)
	{
	case '+': cout << c << oper << d << "=" << c + d; break;
	case '-': cout << c << oper << d << "=" << c - d; break;
	case '*': cout << c << oper << d << "=" << c * d; break;
	case '/': cout << c << oper << d << "=" << c / d; break;
	default: cout << "ERROR";
	}
#endif // HomeWork 
#ifdef Lucky
	int a, a1, a2, a3, a4, a5, a6, sum, sum1;
	cout << "Введите номер вашего билета:" << endl;
	cin >> a;
	if (a < 0 || a > 999999) { cout << "ошибка"; }
	else
		a6 = a % 10;
	a5 = a / 10 % 10;
	a4 = a / 100 % 10;
	a3 = a / 1000 % 10;
	a2 = a / 10000 % 10;
	a1 = a / 100000;

	while (a1 + a2 + a3 == a4 + a5 + a6)
	{
		cout << "Ваш билет счастливый.Поздравляем!" << endl;
		return 0;
	}

	cout << "Билет не является счастливым. Попробуйте еще." << endl;
	return 0;
#endif
	int input = 0, tmp_acc = 0;
	do
	{
		cout << "Please enter you number:";
		cin >> input;
		if (input < 1 || input >= 1000000)cout << "Error: Введенное число НЕ является номером билета\n";
	} while (input < 100000 || input >= 1000000);
	/*if (input < 0 || input > 999999)
	{
		cout << "error";
	}
	else*/ {
		int i = 0;
		while (i < 3)
		{
			tmp_acc += input % 10;
			input = input / 10;
			i++;
		}
		i = 0;
		while (i < 3)
		{
			tmp_acc -= input % 10;
			input = input / 10;
			i++;
		}
		if (tmp_acc == 0)
		{
			cout << "You are lucky !!!";
		}
		else {
			cout << "Looser :P";
		}
	}
	return 0;
}