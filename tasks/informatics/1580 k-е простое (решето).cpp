#include <iostream>
#include <cmath>

using namespace std;

void resheto(int n, bool **pr)
{
    *pr = new bool[n + 1];
    for (int i = 0; i <= n; i++)
        (*pr)[i] = 1;
    (*pr)[0] = (*pr)[1] = 0;
    for (int i = 2; i * i <= n; i++)
        if ((*pr)[i])
            for (int j = i * i; j <= n; j += i)
                (*pr)[j] = 0;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k, count = 0, i;
    cin >> k;
    bool* pr;
    resheto(1500000, &pr);
    for (i = 0; i <= 1500000 && count < k; i++)
        count += pr[i];
    cout << i - 1;
}
