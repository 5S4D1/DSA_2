#include <iostream>
using namespace std;

long long power(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        int mid = y / 2;
        long long pro = power(x, mid);
        if (y % 2 == 0)     // if y is even
            return pro * pro;
        else                // if y is odd
            return pro * pro * x;
    }
}

int main()
{
    int base, pow;
    cin >> base >> pow;

    cout << power(base,pow);

    return 0;
}