#include<iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Выберите операцию" << endl;
	cout << "[-]Вычесть" << endl;
	cout << "[+]Сложить" << endl;
	cout << "[*]Умножить" << endl;
	cout << "[/]Делить" << endl;
	cout << "[%]Делить с остатком" << endl;
	cout << "[s]Корень числа" << endl;
	cout << "[z]Квадрат числа" << endl;
	cout << "[p]Степень числа" << endl;
	cout << "Выберите действие:";
	char menu;
	cin >> menu;
	system("cls");
	int number1;
	int number2;
	if (menu == '-') {
		cout << "Введите первое число" << endl;
		cin >> number1;
		cout << "Введите второе число" << endl;
		cin >> number2;
		cout << number1 << '-' << number2 << "=" << number1 - number2;
	}
	else if (menu == '+') {
		cout << "Введите первое число" << endl;
		cin >> number1;
		cout << "Введите второе число" << endl;
		cin >> number2;
		cout << number1 << '+' << number2 << "=" << number1 + number2;
	}
	else if (menu == '*') {
		cout << "Введите первое число" << endl;
		cin >> number1;
		cout << "Введите второе число" << endl;
		cin >> number2;
		cout << number1 << '*' << number2 << "=" << number1 * number2;
	}

	else if (menu == '/')
	{
		cout << "Введите первое число" << endl;
		cin >> number1;
		cout << "Введите второе число" << endl;
		cin >> number2;
		if (number2 == 0) {

			cout << "Делить на ноль нельзя";
		}
		else {
			cout << number1 << '/' << number2 << "=" << number1 / number2;
		}

	}

	else if (menu == '%') {
		cout << "Введите первое число" << endl;
		cin >> number1;
		cout << "Введите второе число" << endl;
		cin >> number2;
		cout << number1 << '%' << number2 << "=" << number1 % number2;
	}
	else if (menu == 's')
	{
		cout << "Введите число:";
		cin >> number1;
		system("cls");
		cout << "Корень числа " << number1 << " = " << sqrt(number1);
	}
	else if (menu == 'z')
	{
		cout << "Введите число:";
		cin >> number1;
		system("cls");
		cout << "Квадрат числа " << number1 << " = " << number1 * number1;
	}
	else if (menu == 'p')
	{
		cout << "Введите число для возведения в степень:";
		cin >> number1;
		cout << "Введите степень:";
		cin >> number2;
		system("cls");
		cout << "Число " << number1 << " в степени " << number2 << " = " << pow(number1, number2);
	}
	else {
		cout << "Введено неправильное значение" << endl;
	}


	return 0;
}
