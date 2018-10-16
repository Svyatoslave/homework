#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int x0, y0, x1, y1;
	cout << "Введите кординату x для первой точки" << endl;
	cin >> x0;
	cout << "Введите кординату y для первой точки" << endl;
	cin >> y0;
	cout << "Введите кординату x для второй точки" << endl;
	cin >> x1;
	cout << "Введите кординату y для второй точки" << endl;
	cin >> y1;
	if ((x0 == x1) || (y0 == y1)) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO";
	}
	cin.get();
	cin.get();
	return 0;
}