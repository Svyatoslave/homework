#include<iostream>
#include<conio.h>
#include<locale>
#include<string>
using namespace std;
int main() {
	int n, m,k;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "¬ведите число" << endl;
	cin >> n;
	k = 1;
	m = 1;
	while (m < n) {
		cout << m << " ";
		k = k + 1;
	    m = k * k;
	}
	cin.get();
	cin.get();
	return 0;
}