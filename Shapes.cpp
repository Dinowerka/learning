#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	cout << "геометрические фигуры:\n";
	cout << "[1]линия\n";
	cout << "[2]квадрат\n";
	cout << "[3]прямоугольник\n";
	cout << "[4]треугольник\n";
	cout << "[5]решетка\n";
	cout << "[6]крест\n";
	cout << "[7]плюс\n";
	cout << "выберите фигуру:";
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
		cout << "фигура:линия\n\n";
		cout << "[1]горизонтальная\n";
		cout << "[2]вертикальная\n";
		cout << "выберите линию:";
		cin >> direction;
		system("cls");
		cout << "длина линии:";
		cin >> length;
		cout << "текстура линии:";
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
			cout << "введено неправильное значение";
			break;
		}
		break;
	}
	case 2: {
		cout << "[1]заполненный\n[2]пустой\n";
		cin >> menu;
		system("cls");
		cout << "введите размер:";
		cin >> length;
		cout << "текстура линии:";
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
			cout << "введено неправильное значение";
			break;
		}
	}
		  break;

	case 3:
		int height;
		cout << "[1]заполненный\n[2]пустой\n";
		cin >> menu;
		system("cls");
		cout << "введите ширину:";
		cin >> length;
		cout << "введите высоту:";
		cin >> height;
		cout << "введите текстуру:";
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
		default:cout << "введено неправильное значение";
			break;
		}

		break;

	case 4: {
		int height;

		cout << "фигура:треугольник\n";

		while (true) {
			cout << "укажите высоту треугольника.\n\nвысота треугольника: ";
			cin >> height;
			if (height < 1) {
				cin.clear();
				cin.ignore();
				cout << "\nнеправильный размер\n\n";
			}
			else {
				break;
			}
		}

		int size = 2 * (height - 1) + 1;

		cout << "\nукажите текстуру треугольника\n\nтекстура треугольника: ";
		cin >> texture;

		int isfull;

		while (true) {
			cout << "\nполный ли треугольник?\n\n[1]да\n[2]нет\n\nввод: ";
			cin >> isfull;
			if (isfull < 1 || isfull > 2) {
				cin.clear();
				cin.ignore();
				cout << "ошибка\n\n";
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

		cout << "фигура:решетка\n";

		while (true) {
			cout << "укажите  размер решетки.\n\nразмер решетки: ";
			cin >> size;

			if (size < 1 || size % 2 == 0) {
				cin.clear();
				cin.ignore();
				cout << "\nуказаны некорректные данные\n\n";
			}
			else {
				break;
			}
		}

		cout << "\nукажите текстуру решетки.\n\nтекстура квадрата: ";
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

		cout << "фигура:крест\n";

		while (true) {
			cout << "укажите размер крестика.\n\nразмер крестика: ";
			cin >> size;

			if (size < 1) {
				cin.clear();
				cin.ignore();
				cout << "введены некорректные данные\n\n";
			}
			else {
				break;
			}
		}

		cout << "\nукажите текстуру крестика.\n\nтекстура крестика: ";
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

		cout << "фигура:плюс\n";

		while (true) {
			cout << "укажите размер плюса.\n\nразмер плюса: ";
			cin >> size;

			if (size < 1 || size % 2 == 0) {
				cin.clear();
				cin.ignore();
				cout << "\nвведены некорректные данные\n\n";
			}
			else {
				break;
			}
		}

		cout << "\nукажите текстуру плюса.\n\nтекстура плюса: ";
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