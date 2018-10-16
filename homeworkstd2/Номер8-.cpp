#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int n;
	cout << "¬ведите число" << endl;
	cin >> n ;
     while (n < 1000) {
		n = n * 10;
	}
	if ((n == (n % 1000)) && (((n % 10) / 10) == (((n /100) % 10))))
	{
		cout << "1";
	}
	else {
	cout<<n <<endl;
	}
		cin.get();
			cin.get();
			return 0;
	
	}