#include<iostream>
#include<locale>
#include <cmath>
using namespace std;
int main() {
	int x1, x2, y1, y2;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "������� ��������� 1 ������" << endl;
	cin >> x1 >> y1;

	cout << "������� ��������� 2 ������" << endl;
	cin >> x2 >> y2;
	if ((x2 - x1)||(y2-y1))
	{
		cout << "Yes" << endl;
	}
	else {
		cout << "No";
	}

	cin.get();
	cin.get();
	return 0;
}