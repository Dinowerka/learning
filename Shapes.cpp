#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "�������������� ������:\n";
	cout << "[1]�����\n";
	cout << "[2]�������\n";
	cout << "[3]�������������\n";
	cout << "[4]�����������\n";
	cout << "[5]�������\n";
	cout << "[6]�����\n";
	cout << "[7]����\n";
	cout << "�������� ������:";
	int length;
	char texture;
	int result;
	short menu;
	cin >> menu;
	system("cls");
	switch (menu)
	{
	case 1: {
		int direction;
		cout << "������:�����\n\n";
		cout << "[1]��������������\n";
		cout << "[2]������������\n";
		cout << "�������� �����:";
		cin >> direction;
		system("cls");
		cout << "����� �����:";
		cin >> length;
		cout << "�������� �����:";
		cin >> texture;
		system("cls");
		int i = 0;
		switch (direction)
		{
		case 1:
			while (i < length)

			{
				i++;
				cout << texture;
			}
			break;

		case 2:
			while (i < length)
			{
				i++;
				cout << texture << endl;
			}
			break;

		default:
			cout << "������� ������������ ��������";
			break;
		}
		break;
	}
	case 2: {
		cout << "[1]�����������\n[2]������\n";
		cin >> menu;
		system("cls");
		cout << "������� ������:";
		cin >> length;
		cout << "�������� �����:";
		cin >> texture;
		switch (menu)
		{
		case 1:
			for (int i = 0; i < length; i++)
			{

				for (int j = 0; j < length; j++)
				{
					cout << ' ' << texture;
				}
				cout << endl;
			}
			break;
		case 2:
			for (int y = 0; y < length; y++)
			{
				for (int x = 0; x < length; x++)
				{
					if (y == 0 || x == 0 || y == length - 1 || x == length - 1)
					{

						cout << " " << texture;
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		default:
			cout << "������� ������������ ��������";
			break;
		}
	}
		  break;

	case 3:
		int height;
		cout << "[1]�����������\n[2]������\n";
		cin >> menu;
		system("cls");
		cout << "������� ������:";
		cin >> length;
		cout << "������� ������:";
		cin >> height;
		cout << "������� ��������:";
		cin >> texture;
		switch (menu)
		{
		case 1:
			for (int y = 0; y < height; y++)
			{
				for (int x = 0; x < length; x++)
				{
					cout << " " << texture;

				}
				cout << endl;
			}
			break;
		case 2:
			for (int y = 0; y < height; y++)
			{
				for (int x = 0; x < length; x++)
				{
					if (y == 0 || x == 0 || y == height - 1 || x == length - 1)
					{

						cout << " " << texture;
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
			}
			break;
		default:cout << "������� ������������ ��������";
			break;
		}

		break;

	case 4: {
		int height;

		cout << "������:�����������\n";

		while (true) {
			cout << "������� ������ ������������.\n\n������ ������������: ";
			cin >> height;
			if (height < 1) {
				cin.clear();
				cin.ignore();
				cout << "\n������������ ������\n\n";
			}
			else {
				break;
			}
		}

		int size = 2 * (height - 1) + 1;

		cout << "\n������� �������� ������������\n\n�������� ������������: ";
		cin >> texture;

		int isfull;

		while (true) {
			cout << "\n������ �� �����������?\n\n[1]��\n[2]���\n\n����: ";
			cin >> isfull;
			if (isfull < 1 || isfull > 2) {
				cin.clear();
				cin.ignore();
				cout << "������\n\n";
			}
			else {
				break;
			}
		}

		system("cls");

		switch (isfull) {
		case 1: {
			for (int i = 1; i <= height; i++) {
				for (int j = 0; j < size; j++) {
					if (j <= size / 2 - i || j >= size / 2 + i) {
						cout << "  ";
					}
					else {
						cout << texture << " ";
					}
				}
				cout << "\n";
			}
			break;
		}

		case 2: {
			for (int i = 0; i < height; i++) {
				for (int j = 0; j < size; j++) {
					if (j == size / 2 - i || j == size / 2 + i || i == height - 1) {
						cout << texture << " ";
					}
					else {
						cout << "  ";
					}
				}
				cout << "\n";
			}
			break;
		}
		}
		break;
	}
	case 5: {
		int size;

		cout << "������:�������\n";

		while (true) {
			cout << "�������  ������ �������.\n\n������ �������: ";
			cin >> size;

			if (size < 1 || size % 2 == 0) {
				cin.clear();
				cin.ignore();
				cout << "\n������� ������������ ������\n\n";
			}
			else {
				break;
			}
		}

		cout << "\n������� �������� �������.\n\n�������� ��������: ";
		cin >> texture;

		system("cls");

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (i % 2 == 1 || j % 2 == 1) {
					cout << texture << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << "\n";
		}

		break;

	}
	case 6: {
		int size;

		cout << "������:�����\n";

		while (true) {
			cout << "������� ������ ��������.\n\n������ ��������: ";
			cin >> size;

			if (size < 1) {
				cin.clear();
				cin.ignore();
				cout << "������� ������������ ������\n\n";
			}
			else {
				break;
			}
		}

		cout << "\n������� �������� ��������.\n\n�������� ��������: ";
		cin >> texture;

		system("cls");

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (i == j || size - 1 - j == i) {
					cout << texture << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << "\n";
		}
		break;
	}
	case 7: {
		int size;

		cout << "������:����\n";

		while (true) {
			cout << "������� ������ �����.\n\n������ �����: ";
			cin >> size;

			if (size < 1 || size % 2 == 0) {
				cin.clear();
				cin.ignore();
				cout << "\n������� ������������ ������\n\n";
			}
			else {
				break;
			}
		}

		cout << "\n������� �������� �����.\n\n�������� �����: ";
		cin >> texture;

		system("cls");

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (size / 2 == i || size / 2 == j) {
					cout << texture << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << "\n";
		}
		break;
	}

	}

}