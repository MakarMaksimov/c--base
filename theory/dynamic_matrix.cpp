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
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}

int main()
{
	/*int a[5][3];
	int** m = new int*[5];
	for (int i = 0; i < 5; i++)
		m[i] = new int[3];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 3; j++)
			cin >> m[i][j];
	for (int i = 0; i < 5; i++)
		delete[] m[i];
	delete[] m;*/

	int** e, n, m;
	readMatrix(&e, &n, &m);
	writeMatrix(e, n, m);

}
