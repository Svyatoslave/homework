#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;
int main() {
	int n, m;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "¬ведите число" << endl;
	cin >> n;
	m = 1;
	while (m <= n) {
		m = m + 1;
		if ((n%m) == 0) {
			cout << m;
			m = n + 1;
		}
	}
	cin.get();
	cin.get();
	return 0;
}