#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;
int main() {
	int n1, n2, n3;
	setlocale(LC_ALL, "RUSSIAN");
	cout << "¬ведите 1 значение" << endl;
	cin >> n1;
	cout << "¬ведите 2 значение" << endl;
	cin >> n2;
	cout << "¬ведите 3 значение" << endl;
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
