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
	cout << "������� ����������� �������:"; cin >> temperature;
	if (temperature > 0)
	{
		cout << "�� ����� �����" << endl;

	}
	else
	{
		cout << "�� ����� �������" << endl;
	}
#endif TEMPERATURE
#if defined TARGET
	int n;
	cout << "������� �����:"; cin >> n;
	if (n > 0 && n < 10)
		cout << "���� ��������" << endl;
	else
		cout << "�� ������������" << endl;
#endif TARGET
#ifdef CALCULATOR
	double a, b;
	char znak;

	cout << "������� ��������� ���� a+b,a-b,a*b,a/b :"; cin >> a >> znak >> b;

	if (znak == '+')
	{
		cout << "����� �����:" << a + b << endl;
	}
	else if (znak == '-')
	{
		cout << "�������� �����:" << a - b << endl;
	}

	else if (znak == '*')
	{
		cout << "������������ �����:" << a * b << endl;
	}
	else if (znak == '/')
	{
		cout << "������� �����:" << a / b << endl;
	}
	else
	{
		cout << "������" << endl;
	}
#endif CALCULATOR
#if defined CALL_1
	double a, b;
	char s;
	cout << "������� ������� �������������� ���������:" << endl;
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
	cout << "������� ������� �������������� ���������:" << endl;
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
	cout << "������� ����� ������ ������:" << endl;
	cin >> a;
	if (a < 0 || a > 999999) { cout << "������"; }
	else
		a6 = a % 10;
	a5 = a / 10 % 10;
	a4 = a / 100 % 10;
	a3 = a / 1000 % 10;
	a2 = a / 10000 % 10;
	a1 = a / 100000;

	while (a1 + a2 + a3 == a4 + a5 + a6)
	{
		cout << "��� ����� ����������.�����������!" << endl;
		return 0;
	}

	cout << "����� �� �������� ����������. ���������� ���." << endl;
	return 0;
#endif
	int input = 0, tmp_acc = 0;
	do
	{
		cout << "Please enter you number:";
		cin >> input;
		if (input < 1 || input >= 1000000)cout << "Error: ��������� ����� �� �������� ������� ������\n";
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