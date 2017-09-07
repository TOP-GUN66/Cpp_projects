#include <iostream>
#include<string>

using namespace std;
class circle {
private :
	//double r;
	double length;
	double area;
	string name;
public:
	double r;
	

public:
	string getname();
	double getlength();
	double getarea();
	void setname(string s);
	void setlength(double n);

	
};
string circle::getname() {
	return name;
}
double circle::getlength() {
	return  2* 3.14* r ;
}
double circle::getarea() {
	return 3.14*r*r;
}
void circle::setname(string s) {
	name = s;
}
void circle::setlength(double n) {
	r = n;
}
int main() {
	circle a;
	string m;
	double n;
	cout << "Input name:" << endl;
	cin >> m;
	a.setname(m);
	cout << "Input length" << endl;
	cin >> n;
	a.setlength(n);


	cout << "name:";
	cout<<a.getname()<<endl;
	cout << "length:";
	cout << a.getlength() << endl;
	cout << "area";
	cout << a.getarea() << endl;
	
	system("pause");
	return 0;
}