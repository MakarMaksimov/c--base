#include <iostream>

using namespace std;

bool isPrime(int x)
{
	if (x < 2)
		return false;
	for (int i = 2; i * i <= x; i++)
		if (x % i == 0)
			return false;
	return true;
}

int sumOfDigits(int x)
{
	int s = 0;
	while (x)
	{
		s += x % 10;
		x /= 10;
	}
	return s;
}

int sumOfFactorize(int x)
{
	int smDel = 0;
	for (int j = 2; j * j <= x; j++)
		while (x % j == 0)
		{
			smDel += sumOfDigits(j);
			x /= j;
		}
	if (x != 1)
		smDel += sumOfDigits(x);
	return smDel;
}

int main()
{
	int a[20], n = 0, x;
	while (cin >> x)
	{
		a[n] = x;
		n++;
	}
	for (int i = 0; i < n; i++)
		if (!isPrime(a[i]) && sumOfDigits(a[i]) == sumOfFactorize(a[i]))
			cout << 1;
		else
			cout << 0;
}
