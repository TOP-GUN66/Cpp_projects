#include <iostream>
#include<vector>
#include<string>
using namespace std;
//p135 4.21
/*void main() {
	vector <int> v{ 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < v.size(); ++i) {
		v[i] = (v[i] % 2 == 0) ? v[i] : 2*v[i];
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << "v[" << i << "]:" << v[i]<<"\t";
	} 
	system("pause");
}*/
//p135 4.22
/*void main() {
	int grade;
	cout << "Enter the score" << endl;
	cin >> grade;
	while (grade) {
		if (grade > 100) {
			cout << "Erro" << endl;
		}
		else if (grade > 90) {
			cout << "high-pass" << endl;
		}
		else if (grade > 75) {
			cout << "low-pass" << endl;
		}
		else if (grade >= 60) {
			cout << "pass" << endl;
		}
		else if(grade>0&&grade<60){
			cout << "fail" << endl;
		}
		else {
			cout << "Erro" << endl;
		}
		cout << "Enter the score" << endl;
		cin >> grade;
	}
	system("pause");
}*/
/*void main() {
	int grade;
	
	cout << "enter the score" << endl;
	cin >> grade;
	while (grade) {
		string level;
		level = (grade > 100) ? "Erro" : (grade > 90) ? "High-pass" : (grade > 75) ? "Low-pass" : (grade > 60) ? "Pass" : "Fail";
		cout << level << endl;
		cout << "enter the score" << endl;
		cin >> grade;
	}
	system("pause");
}*/