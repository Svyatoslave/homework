#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int x0, y0, x1, y1;
	cout << "������� ��������� x ��� ������ �����" << endl;
	cin >> x0;
	cout << "������� ��������� y ��� ������ �����" << endl;
	cin >> y0;
	cout << "������� ��������� x ��� ������ �����" << endl;
	cin >> x1;
	cout << "������� ��������� y ��� ������ �����" << endl;
	cin >> y1;
	if ((x0 == x1) || (y0 == y1)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO";
	}
	cin.get();
	cin.get();
	return 0;
}