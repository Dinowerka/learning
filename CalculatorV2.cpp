#include<iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "�������� ��������" << endl;
	cout << "[-]�������" << endl;
	cout << "[+]�������" << endl;
	cout << "[*]��������" << endl;
	cout << "[/]������" << endl;
	cout << "[%]������ � ��������" << endl;
	cout << "[s]������ �����" << endl;
	cout << "[z]������� �����" << endl;
	cout << "[p]������� �����" << endl;
	cout << "�������� ��������:";
	char menu;
	cin >> menu;
	system("cls");
	int number1;
	int number2;
	if (menu == '-') {
		cout << "������� ������ �����" << endl;
		cin >> number1;
		cout << "������� ������ �����" << endl;
		cin >> number2;
		cout << number1 << '-' << number2 << "=" << number1 - number2;
	}
	else if (menu == '+') {
		cout << "������� ������ �����" << endl;
		cin >> number1;
		cout << "������� ������ �����" << endl;
		cin >> number2;
		cout << number1 << '+' << number2 << "=" << number1 + number2;
	}
	else if (menu == '*') {
		cout << "������� ������ �����" << endl;
		cin >> number1;
		cout << "������� ������ �����" << endl;
		cin >> number2;
		cout << number1 << '*' << number2 << "=" << number1 * number2;
	}

	else if (menu == '/')
	{
		cout << "������� ������ �����" << endl;
		cin >> number1;
		cout << "������� ������ �����" << endl;
		cin >> number2;
		if (number2 == 0) {

			cout << "������ �� ���� ������";
		}
		else {
			cout << number1 << '/' << number2 << "=" << number1 / number2;
		}

	}

	else if (menu == '%') {
		cout << "������� ������ �����" << endl;
		cin >> number1;
		cout << "������� ������ �����" << endl;
		cin >> number2;
		cout << number1 << '%' << number2 << "=" << number1 % number2;
	}
	else if (menu == 's')
	{
		cout << "������� �����:";
		cin >> number1;
		system("cls");
		cout << "������ ����� " << number1 << " = " << sqrt(number1);
	}
	else if (menu == 'z')
	{
		cout << "������� �����:";
		cin >> number1;
		system("cls");
		cout << "������� ����� " << number1 << " = " << number1 * number1;
	}
	else if (menu == 'p')
	{
		cout << "������� ����� ��� ���������� � �������:";
		cin >> number1;
		cout << "������� �������:";
		cin >> number2;
		system("cls");
		cout << "����� " << number1 << " � ������� " << number2 << " = " << pow(number1, number2);
	}
	else {
		cout << "������� ������������ ��������" << endl;
	}


	return 0;
}
