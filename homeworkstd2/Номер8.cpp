#include<iostream>
#include<conio.h>
#include<locale>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int n,k;
	cout << "������� �����" << endl;
	cin >> n;
	srand(time(0));
	k = rand();
	while (n < 1000) {
		n = n * 10;
	}
	if (((n/1000) == (n%10)) && (((n/100)%10) == ((n%100)/10)))
	{
		cout << "1";
	}
	else {
		cout << k << endl;
	}
	cin.get();
	cin.get();
	return 0;

}