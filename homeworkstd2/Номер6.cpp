#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;
int main() {
	int n1, n2, n3;
	setlocale(LC_ALL, "RUSSIAN");
	int a, b, c, i;
	cout << "������� ���� � ������ " << endl;
	cin >> a;
	cout << "������� ���� � �������� " << endl;
	cin >> b;
	cout << "������� ���-�� " << endl;
	cin >> c;
	i = 0;
	b = b * c;
	if (b > 99) {
		i = b / 100;
		b = b - (i * 100);
	}
	a = a * c;
	a = a + i;
	cout << a << " " << b;
	cin.get();
	cin.get();
	return 0;
}