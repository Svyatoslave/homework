#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;
int main() {
	int n1, n2;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "¬ведите 1 значение" << endl;
	cin >> n1;
	cout << "¬ведите 2 значение" << endl;
	cin >> n2;
	if (n1 > n2) {
		cout << "1" << endl;
	}
	else {
		if (n1 == n2) {
			cout << '0';
		}
		else {
			cout << "2 " << endl;
		}
	}
	cin.get();
	cin.get();
	return 0;
}