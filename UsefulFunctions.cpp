#include<iostream>
using namespace std;
void ClearConsole() {
	system("cls");
}
void ChangeConsoleBackground() {
	system("color F5");
}
void ChangeConsoleText() {
	system("color 9");
}
void WriteSizeOfInt() {
	cout << "������ ���� ������ int - " << sizeof(int) << " ����\n";
}
void WriteSizeOfChar() {
	cout << "������ ���� ������ char - " << sizeof(char) << " ����\n";
}
void WriteSizeOfDouble() {
	cout << "������ ���� ������ double - " << sizeof(double) << " ����\n";
}
void WriteSizeOfFloat() {
	cout << "������ ���� ������ float - " << sizeof(float) << " ����\n";
}
void WriteSizeOfBool() {
	cout << "������ ���� ������ bool - " << sizeof(bool) << " ����\n\n";
}
void WriteHello() {
	cout << "������ � �������\n\n";
}
void PrintSquare5x5() {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << " *";
		}
		cout << endl;
	}
}
int main() {
	setlocale(0, "");
	ClearConsole();
	ChangeConsoleBackground();
	ChangeConsoleText();
	WriteSizeOfInt();
	WriteSizeOfChar();
	WriteSizeOfDouble();
	WriteSizeOfFloat();
	WriteSizeOfBool();
	WriteHello();
	PrintSquare5x5();
	return 666;
}