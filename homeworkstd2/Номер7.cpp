#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int v, t, s;
	cout << "������� �������� ����" << endl;
	cin >> v;
	cout << "������� ����� � �����" << endl;
	cin >> t;
	s = (109 + (v * t % 109)) % 109;
	cout << s;
	cin.get();
	cin.get();
	return 0;
}