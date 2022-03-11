// https://acmp.ru/asp/do/index.asp?main=task&id_course=1&id_section=5&id_topic=114&id_problem=705
#include <iostream>

using namespace std;

int main()
{
    int x[1000], mx[1000];
    int n, max = -1000, max_i, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i];;
    }
    for (int i = n - 1; i >= 0; i--) {
        if (x[i] > max) {
            max = x[i];
            max_i = i;
        }
        mx[i] = max_i;
    }
    for (int i = 0; i < n; i = mx[i] + 1)
        sum += x[mx[i]] * (mx[i] - i + 1);
    cout << sum;
}
