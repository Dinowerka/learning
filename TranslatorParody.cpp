#include<iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "Welcome to the translator\n\n\n";
	cout << "�������� ��������:" << endl;
	cout << "[1]������� �����" << endl;
	cout << "[2]���������� �����" << endl;
	cout << "[3]�����" << endl;
	int menu;
	int number;
	cin >> menu;
	system("cls");
	switch (menu) {
	case 1:
		cout << "�������� ����� �����:\n";
		cout << "[1]���\n[2]�������\n[3]����\n[4]������\n[5]�������\n[6]���\n[7]�����\n[8]���\n[9]�������\n[10]���\n[11]����\n[12]�������������\n[13]�����\n[14]��������\n[15]����\n";
		cin >> number;
		system("cls");
		switch (number) {
		case 1:
			cout << "���-food";
			break;
		case 2:
			cout << "�������-frog";
			break;
		case 3:
			cout << "����-wolf";
			break;
		case 4:
			cout << "������-car";
			break;
		case 5:
			cout << "�������-bed";
			break;
		case 6:
			cout << "���-sword";
			break;
		case 7:
			cout << "�����-book";
			break;
		case 8:
			cout << "���-forest";
			break;
		case 9:
			cout << "�������-fuel";
			break;
		case 10:
			cout << "���-home";
			break;
		case 11:
			cout << "����-window";
			break;
		case 12:
			cout << "�������������-Breathtaking";
			break;
		case 13:
			cout << "�����-pen";
			break;
		case 14:
			cout << "��������-pencil";
			break;
		case 15:
			cout << "����-river";
			break;
		default:
			cout << "������ ������������ ������!";
			break;
		}
		break;
	case 2:
		cout << "�������� ����� �����:\n";
		cout << "[1]Food\n[2]Frog\n[3]Wolf\n[4]Car\n[5]Bed\n[6]Sword\n[7]Book\n[8]Forest\n[9]Fuel\n[10]Home\n[11]Window\n[12]Breathtaking\n[13]Pen\n[14]Pencil\n[15]River\n";
		cin >> number;
		system("cls");
		switch (number) {
		case 1:
			cout << "Food-���";
			break;
		case 2:
			cout << "Frog-�������";
			break;
		case 3:
			cout << "Wolf-����";
			break;
		case 4:
			cout << "Car-������";
			break;
		case 5:
			cout << "Bed-�������";
			break;
		case 6:
			cout << "Sword-���";
			break;
		case 7:
			cout << "Book-�����";
			break;
		case 8:
			cout << "Forest-���";
			break;
		case 9:
			cout << "Fuel-�������";
			break;
		case 10:
			cout << "Home-���";
			break;
		case 11:
			cout << "Window-����";
			break;
		case 12:
			cout << "Breathtaking-�������������";
			break;
		case 13:
			cout << "Pen-�����";
			break;
		case 14:
			cout << "Pencil-��������";
			break;
		case 15:
			cout << "River-����";
			break;
		default:
			cout << "������ ������������ ������!";
			break;
		}
		break;

	case 3:
		cout << "�� � �� ����� �� � �������� ����������";
		break;
	default:
		cout << "�� ��������� �� ������ �������";
		break;
	}
	return 0;
}