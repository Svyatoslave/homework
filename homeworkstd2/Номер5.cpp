#include<iostream>
#include<conio.h>
#include<locale>

using namespace std;

int main() {
	int A, B, C;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "������� ������� �" << endl;
	  cin >> A ;
	cout << "������� 2 ��������" << endl;
	  cin >> B;
	cout << "������� 3 ��������" << endl;
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
