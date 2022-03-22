#include <iostream>
#include <cstdlib>

using namespace std;

void print(int* m, int n)
{
	for (int i = 0; i < n; i++)
		cout << m[i] << " ";
	cout << endl;
}

void read(int** m, int* n)
{
	cin >> *n;
	*m = new int[*n];
	for (int i = 0; i < *n; i++)
		cin >> (*m)[i];
}

void read2(int** m, int* n)
{
	int *a, k;
	cin >> k;
	a = new int[k];
	for (int i = 0; i < k; i++)
		cin >> a[i];
	*n = k;
	*m = a;
}

int* read3(int* n)
{
	int *a;
	cin >> *n;
	a = new int[*n];
	for (int i = 0; i < *n; i++)
		cin >> a[i];
	return a; // Динамически выделенная память останется даже после завершения
	//функции и удаления указателя a
	// int e[10];
	// return e; // Память выделенная под этот массив удалится после завершения
	// функции
}


int main()
{
	int n;
	int* p = NULL;
	read(&p, &n);
	read2(&p, &n);
	p = read3(&n);
	// int a[10];
	// read(&a, 10); Так нельзя, потому что a - не может изменяться, а 10 -
	// значение, а не адрес
	print(p, n);
}
