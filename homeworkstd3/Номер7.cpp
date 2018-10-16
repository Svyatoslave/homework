#include<iostream>
#include<conio.h>
#include<locale>
#include<string>
using namespace std;
int main() {
	int n, m;
	setlocale(LC_ALL, "RUSSIAN");
	m = 0;
	n = -1;
	cout << "¬ведите числа" << endl;
	while (n != 0) {
		cin >> n;
		if (n == 0) break;
		if (m < n) {
			m = n;
		}
	}
	cout << m;
	cin.get();
	cin.get();
	return 0;
}