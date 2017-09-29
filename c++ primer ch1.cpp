#include<iostream>
using namespace std;
//p11 1.9
/*void main() {
	int sum = 0;
	int num = 50;
	while (num <= 100) {
		sum += num;
		num++;
	}
	cout << "Result:" << "\t" << sum << endl;
	system("pause");
}
//p11 1.10
void main() {
	int i = 10;
	while (i >= 0) {
		cout << i << endl;
		i--;
	}
	system("pause");
}
//p11 1.11
void main() {
	int a, b;
	cout << "Input the first number" << endl;
	cin >> a;
	cout << "Input the second number" << endl;
	cin >> b;

	if (a < b) {
		while (a <= b) {
			cout << a << "\t";
			a++;
		}
		cout << endl;
	}

	else {
		while (b <= a) {
			cout << b << "\t";
			b++;
		}
		cout << endl;
	}
	
	system("pause");
}*/
//1.16
void main() {
	cout << "input numbers" << endl;
	int a;
	int sum = 0;
	cin >> a;
	while (a != 0) {
		cin >> a;
		sum += a;
	}
	cout << "result:" << sum << endl;
	system("pause");
}