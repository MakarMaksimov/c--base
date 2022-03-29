#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int x)
{
    if (x < 2)
        return false;
    for (int k = 2; k * k <= x; k++)
        if (x % k == 0)
            return false;
    return true;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, count_n = 0, i;
    cin >> n;
    for (i = 2; count_n < n; i++)
        if (is_prime(i))
            count_n++;
    cout << i - 1;
}
