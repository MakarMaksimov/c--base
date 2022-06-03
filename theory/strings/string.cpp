#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
	string s = "Hello"; // современный строковый тип
	s += " world"; // можно складывать такие строки
	cout << s << endl;
	s = string("hello") + " world"; // строки вида char[] складывать нельзя,
	// нужно привести одну из них к string
	cout << s << endl;
	cin >> s; // считывает строку до разделителя (пробел, \n)
	cout << s << endl;
	getline(cin, s); // считывает строку из cin в s до ближайшего \n
	cout << s << endl;
	int a;
	cin >> a; // если необходимо считать строку после введённой
	getline(cin, s); // с помощью cin переменной, после которой был
	getline(cin, s); // переход на след. строку, то чтобы это сделать,
	// нужно вначале убрать лишний переход, добавив ещё один getline
	cout << s << " " << s.size() << endl; // s.size() - размер строки
	// по строковому типу можно ходить как по массиву
	for (int i = 0; i < s.size(); i++)
		cout << s[i] << " ";
 
}
