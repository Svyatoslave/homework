#include<iostream>
#include<locale>
using namespace std;
int main() {
	long double x ;
	long int n;
 setlocale(LC_ALL, "RUSSIAN");
	cout << "������� �����" << endl;
	cin >> x;
	n = x;
	cout << (x-n);
	cin.get();
	cin.get();
	return 0;
}