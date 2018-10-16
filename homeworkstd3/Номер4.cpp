#include<iostream>
#include<conio.h>
#include<locale>
#include<string>
using namespace std;
int main() {
	int n, m;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "¬ведите число" << endl;
	cin >> n;
	m = 2;
	while (m<n) {
		m *= 2;
}
	if (m == n) {
		cout <<"Yes";
	}
	else {
		cout << "NO";
	}
	
	cin.get();
	cin.get();
	return 0;
}