#include <iostream>
#include<vector>
#include<cmath>

using namespace std;

void f(int *e)
{
	cout << "value e: " << e << endl;
	cout <<"adres e: " << &e << endl;
	*e = *e + 1;
}

int main()
{
	int a = 0;
	cout << "adres a: " << &a << endl;
	f(&a);
	cout << a << endl;
}
