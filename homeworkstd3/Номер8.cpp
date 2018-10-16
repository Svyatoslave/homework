#include<iostream>
#include<conio.h>
#include<locale>
#include<string>
using namespace std;
int main() {
	int n, m, c;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "¬ведите числа"<<endl;
	n = -1;
	m = 0;
	c = 0;
	while (n != 0) {
		cin >> n;
		if (n == 0) break;
		if (m < n) {
			m = n;
			c = 1;
		}
		else if (m == n)
		{
			c = c + 1;
		}
	}
	cout << c;
	cin.get();
	cin.get();
	return 0;
}