#include<iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "�������� ����� ����:\n\n";
	cout << "[1]����\n";
	cout << "[2]�����\n";
	cout << "[3]����\n";
	cout << "[4]�����\n";
	cout << "��� �����:";
	int menu;
	cin >> menu;
	system("cls");
	if (menu == 1)
		cout << "������ ������ ����, ����� ������ �������� ����";
	else if (menu == 2) {
		cout << "������ ������������ �����, ����� ��������� ���� ������ ���������";
	}
	else if (menu == 3) {
		cout << "������ ����, ����� ����������� ������ ��������";
	}
	else if (menu == 4) {
		cout << "������ �����, ����� �������� ��� ����";
	}
	else {
		cout << "�������� ���������� ��������";
	}
	return 666;
}