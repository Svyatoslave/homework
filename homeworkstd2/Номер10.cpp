#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;
int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int H, A, B, T;
	cout << "������ ������" << endl;
	cin >> H;
	cout << "����������� �� ����" << endl;
	cin >> A;
	cout << "���������� �� ����" << endl;
	cin >> B;
	T= (H - A) / (A - B) + 1;
	cout <<"����� "<< T<<" ����";
	cin.get();
	cin.get();
	return 0;
}