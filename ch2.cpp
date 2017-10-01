#include<iostream>
using namespace std;
#include<string>
#include<vector>
//p81 3.2
/*
void main() {
	string s;
	//getline(cin, s);//输入一整行
	
	cin >> s;//输入一个词
	cout << s << endl;
	system("pause");
}*/
//p81 3.4
/*
void main() {
	string s1, s2;
	cin >> s1;
	cin >> s2;
	cout << (s1 > s2 ? s1 : s2) << endl;
	system("pause");
}*/
//p81 3.5 p86 3.6
/*
void main() {
	string a, b, c, d, str;
	cin >> a >> b >> c >> d;
	str = a + " " + b + " " + c + " " + d;
	cout << str << endl;
	int num = str.size();
	for (int a = 0; a < num;a++) {
		str[a] = 'x';
	}
	cout << str << endl;
	system("pause");

}*/
//p86 3.10
/*
void main() {
	string str = "i love angel,very much! And i miss her @@";
	int i = str.size();
	int a = 0;
	for (; a < i; a++) {
		if (! ispunct(str[a])) {
			cout <<str[a];
		}
	}
	system("pause");
}
*/
//p91 3.14  3.15 p94 3.16

/*void main() {
	vector<int> v1;
	vector<string >v2;
	int a;
	while (cin >> a) {
		if (a == 0) {
			break;
		}
		v1.push_back(a);
	}
	string s;
	while (cin >> s) {
		if (s == "#") {
			break;
		}
		v2.push_back(s);
	}
	for (auto &a : v1) {
		cout << a<<"\t";
	}
	for (auto &a : v2) {
		cout << a<<"\t";
	}
	system("pause");

}
*/
//p94 3.17
/*
void main() {
	vector<string> vs;
	string str;
	for (int i = 0; i < 5; i++) {
		cin >> str;
		vs.push_back(str);
	}
	int len = vs.size();//转换的时候要挨个字符的转换
	for (int i = 0; i < len;i++) {
		for (int j = 0; j < vs[i].length(); j++)
		{
			vs[i][j] = toupper(vs[i][j]);
		}
	}
	for (auto &a : vs) {
		cout << a << endl;
	}
	system("pause");
}*/
//p94 3.20
/*
void main() {
	vector<int > vi = { 12,23,45,5,78,34,67,34,12,61,7,5,2 };
	int head = 0;
	int tail = vi.size()-1;
	//cout << tail;
	while (head < tail - 1) {
		cout << vi[head] + vi[head + 1] << "\t";
		head++;
	}
	
	while (head < tail) {
		int sum = vi[head] + vi[tail];
		cout << sum<< "\t";
		head++;
		tail--;
	}
	
	system("pause");
}*/
//p99 3.21
/*void main() {
	vector<int> v1 = { 1,2,3,4,5,6,7 };
	for (auto a = v1.begin(); a != v1.end() && !isspace(*a); ++a) {
		cout << *a << "\t";
	}
	system("pause");
}*/
//p99 3.23
/*
void main() {
	vector<int> v = { 1,2,3,4,5,6,7,8,9,10 };
	for (auto it = v.begin(); it != v.end() ; ++it) {
		*it = (*it) * 2;
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\t";
	}
	system("pause");
}*/
//p101 3.25
/*
void main() {
	vector<int> grade(11, 0);
	int times = 0;
	int score;
	int dis;
	while (times<10 && cin >>score) {
		if (score > 100 || score < 0) {
			cout << "ERRO!" << endl;
			break;
		}
		auto it = grade.begin();
		dis = score / 10;
		*(it + dis) += 1;
		times++;
	}
	for (auto a = grade.begin(); a != grade.end() && !isspace(*a); ++a) {
		cout << *a << "\t";
	}
	system("pause");
}*/
//p104 3.31
/*void main() {
	constexpr int a = 10;
	int b[a];
	for (int i = 0; i < a; i++) {
		b[i] = i;
	}
	for (int i = 0; i < a; i++) {
		cout << b[i] << "\t";
	}
	system("pause");


}*/

//p110 3.40
/*void main() {
	char a[100] = "hello,world!";
	char b[100] = "I love cpp!";
	char c[200] = "";
	strcpy_s(c, a);
	strcat_s(c, " ");
	strcat_s(c, b);
	for (int i = 0; i < strlen(c); i++) {
		cout << c[i];
	}
	system("pause");
}*/
//p112 3.41
void main() {
	int arry[5] = { 0,1,2,3,4 };
	vector<int> v(begin(arry), end(arry));
	for (auto a = v.begin(); a != v.end(); a++) {
		cout <<*a;
	}
	system("pause");
}