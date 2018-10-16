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
    m = 1;
while (m < n) {
	cout << m << " ";
	m = m * 2;
}
cin.get();
cin.get();
return 0;
}