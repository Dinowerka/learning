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
	char menu;
	cin >> menu;
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
	else {
		cout << "������� ������������ ��������" << endl;
	}

	return 0;
}
