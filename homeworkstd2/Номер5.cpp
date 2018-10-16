#include<iostream>
#include<conio.h>
#include<locale>

using namespace std;

int main() {
	int A, B, C;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "Введите сторону А" << endl;
	  cin >> A ;
	cout << "Введите 2 значение" << endl;
	  cin >> B;
	cout << "Введите 3 значение" << endl;
	  cin >> C;
	if ((A + B > C) && (A + C > B) && (B + C > A))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	cin.get();
	cin.get();
	return 0;
}
