#include<iostream>
using namespace std;
int main() {
	//指针数组与数组指针
	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int *q[10];//array to pointer
	int (*p)[10];//pointer to array
	p = &a;
	for (int i = 0; i < 10; i++) {
		q[i] = &a[i];
	}
	cout << "pointer to array" << endl;
	for (int i = 0; i < 10; i++) {
		cout << (*p)[i]  << endl;
	}
	cout << "array of pointer" << endl;
	for (int i = 0; i < 10; i++) {
		cout << (*q[i]) << endl;
	}
	//多维数组
	int array[][2] = { 1,2,3,4,5 };
	cout << "array[2][1]:" << array[2][1] << "\t" << "array[1][1]:" << array[1][1] << endl;

	system("pause");
	return 0;
}