#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;
int main() {
	int n1, n2, n3;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "������� 1 ��������" << endl;
	cin >> n1;
	cout << "������� 2 ��������" << endl;
	cin >> n2;
	cout << "������� 3 ��������" << endl;
	cin >> n3;
	if ((n1 == n2) && (n2 == n3)) {
		cout << "3" << endl;
	}
	else
	{
		if (n1 == n2)
		{
			cout << "2" << endl;
		}
		else {
			if (n2 == n3)
			{
				cout << "2" << endl;
			}
			else {if(n1==n3)
				cout << "2";
			else {
				cout << "0";
			}
			}
		}
	}
    cin.get();
	cin.get();
	return 0;
}
