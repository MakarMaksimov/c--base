#include <iostream>
#include <cstdlib>

using namespace std;

//void print(int* m)
//void print(int m[])
void print(int m[5])
{
	//m = new int[15];
	cout << "m: " << m << endl;
	cout << "&m: " << &m << endl;
	for (int i = 0; i < 10; i++)
		cout << m[i] << " ";
	cout << endl;
}


int main()
{
	const int n = 10;
	int a[n];
	int* p = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = i + 1;
		p[i] = (i + 1) * 10;
	}
	cout <<"a: " << a << endl;
	cout << "&a: " << &a << endl;
	print(a);
	cout << "p: " << p << endl;
	cout << "&p: " << &p << endl;
	print(p);
	p = new int[15];
	//a = new int[15];
}
