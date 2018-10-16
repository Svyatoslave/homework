#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int H, A, B, T;
	cout << "Высота столба" << endl;
	cin >> H;
	cout << "Поднимается за день" << endl;
	cin >> A;
	cout << "Опускается за ночь" << endl;
	cin >> B;
	T= (H - A) / (A - B) + 1;
	cout <<"Через "<< T<<" дней";
	cin.get();
	cin.get();
	return 0;
}