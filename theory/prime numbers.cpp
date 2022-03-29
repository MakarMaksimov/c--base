bool is_prime(int x)
{
    if (x < 2)
        return false;
    for (int k = 2; k * k <= x; k++)
        if (x % k == 0)
            return false;
    return true;
}

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
