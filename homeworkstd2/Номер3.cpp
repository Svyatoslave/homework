#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;
int main() {
	int n1, n2, n3;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите 1 значение" << endl;
	cin >> n1;
	cout << "Введите 2 значение" << endl;
	cin >> n2;
	cout << "Введите 3 значение" << endl;
	cin >> n3;
	if (n1 > n2) {
		if (n1 > n3) {
			cout << "Наибольшее число равно " << n1 << endl;
		}
	}
		else {
			if (n2 > n3) {
				cout << "Наибольшее число равно " << n2 << endl;
			}
			else {
				cout << "Наибольшее число равно " << n3 << endl;
			}
		}
	
	cin.get();
	cin.get();
	return 0;
}