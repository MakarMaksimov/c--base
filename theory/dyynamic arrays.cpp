#include <iostream>
#include <cstdlib>

using namespace std;

int x, m[10000000];

int main()
{
	int a;
	int* p = (int*)malloc(3 * sizeof(int));
	p[1] = 100;
	cout << p[1] << endl;
	free(p);
	p = (int*)calloc(3, sizeof(int));
	cout << p << endl;
	p = (int*)realloc(p, 2 * sizeof(int));
	cout << p << endl;
	free(p);
	p = NULL;

	p = new int;
	*p = 2;
	cout << *p << endl;
	delete p;
	int n;
	cin >> n;
	p = new int[n];
	p[n - 1] = 8;
	delete[] p;
}
