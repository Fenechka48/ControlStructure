//LOOPS
#include <iostream>
#include <conio.h> //����� ��������� ������� _getch()
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
	cout << "������� ���������� ��������:"; cin >> n;


	while (i < n)
	{
		cout << i << "Hello World\n";
		i++;// ��� �����
	}
#endif WHILE_1
#ifdef WHILE_2
	int n; // ����������� ��������
	cout << "����������� ��������:"; cin >> n;
	while (n)
	{
		cout << n-- << "\t";
		//n--;
	}
	cout << endl;
#endif // WHILE_2
#ifdef PALINDROM

	int number;
	int revers = 0;// ����� ���������� ����� �� �����
	cout << "������� �����:"; cin >> number;
	int buffer = number; //����� �����, ��������� � ����������
		//��� ����� ����� ��� ����, ����� �������� ������, ���������� �������������
		//�������� ���������
	while (buffer)
	{
		revers *= 10;// ����������� ����� ��� ���������� �������� �������
		revers += buffer % 10; //�������� ������� ������ �����;
		buffer /= 10;//������� ���������� ����� ������� ������
	}
	cout << number << endl;
	cout << revers << endl;
	if (revers == number)
	{
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "����� �� ���������" << endl;
	}
#endif // PALINDROM
#ifdef Escape 27
	char key;//��� ���������� ����� ������� ��� �������
	do
	{
		key = _getch();// ������� _getch() ������� �������
		//� ���������� acke ��� �� ������� �������
		cout << (int)key << "\t" << key << endl;
		//(int)key-����� �������������� ���������� 'key'� ��� ������ 'int'
		// ��� ���� ����� ������� ��� ������� �������.
	} while (key != Escape);
#endif // Escape 27



}