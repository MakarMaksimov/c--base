#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void readMatrix(int*** a, int* n, int* m)
{
	cin >> *n >> *m;
	*a = new int* [*n];
	for (int i = 0; i < *n; i++)
	{
		(*a)[i] = new int[*m];
		for (int j = 0; j < *m; j++)
			cin >> (*a)[i][j];
	}
}

void writeMatrix(int** a, int n, int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

int** RerolMatrix(int** a, int n, int m) {
	int** d = new int* [m];
	for (int i = 0; i < m; i++)
	{
		(d)[i] = new int[n];
		for (int j = 0; j < n; j++)
			d[i][j] = 0;
	}
	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			d[j][i] = a[i][j];
	}
	return d;
}

int** ProductofMatrix(int** a, int** b, int n, int m, int k) {
    int** d = new int* [n];
	for (int i = 0; i < n; i++)
	{
		d[i] = new int [k];
		for (int j = 0; j < k; j++)
			d[i][j] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
			for (int h=0; h<m; h++)
			    d[i][j] += a[i][h]*b[h][j];
	} 
	return d;
}

int main()
{
	int** e, **k, n, m;
	readMatrix(&e, &n, &m);
	readMatrix(&k, &n, &m);
	int** d = ProductofMatrix(e, k, n, m);
	writeMatrix(d, n, m);
}
