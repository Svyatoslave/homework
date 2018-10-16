#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;
int main() {
	int n1, n2, n3;
	setlocale(LC_ALL, "RUSSIAN");
	int a, b, c, i;
	cout << "Введите цену в рублях " << endl;
	cin >> a;
	cout << "Введите цену в копейках " << endl;
	cin >> b;
	cout << "Введите кол-во " << endl;
	cin >> c;
	i = 0;
	b = b * c;
	if (b > 99) {
		i = b / 100;
		b = b - (i * 100);
	}
	a = a * c;
	a = a + i;
	cout << a << " " << b;
	cin.get();
	cin.get();
	return 0;
}