#include <iostream>
#include <cmath>
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

bool is_rotation_needed(int i, int j, int n, int **a)
{
    return i < 0 || i >= n || j < 0 || j >= n || a[i][j] != 0;
}

void rotate(int* step_i, int* step_j)
{
    if (*step_i == 0)
        if (*step_j == 1)
        {
            *step_i = 1;
            *step_j = 0;
        }
        else
        {
            *step_i = -1;
            *step_j = 0;
        }
    else
        if (*step_i == 1)
        {
            *step_i = 0;
            *step_j = -1;
        }
        else
        {
            *step_i = 0;
            *step_j = 1;
        }

}

int** round(int n)
{
    int** a = new int*[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new int[n];
        for (int j = 0; j < n; j++)
            a[i][j] = 0;
    }
    int step_i = 0, step_j = 1;
    for (int cnt = 1, i = 0, j = 0; cnt <= n * n; cnt++)
    {
        a[i][j] = cnt;
        if (is_rotation_needed(i + step_i, j + step_j, n, a))
            rotate(&step_i, &step_j);
        i += step_i;
        j += step_j;
    }
    return a;
}

int main()
{
    int** e, n;
    cin >> n;
    e = round(n);
    writeMatrix(e, n, n);
}
