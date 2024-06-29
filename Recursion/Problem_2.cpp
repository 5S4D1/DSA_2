/*
    2. Write a recursive program to calculate the power of x (x^(y)),
    where y is a non-negative y integer.
*/
#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}

int main()
{
    int x, y;
    cout << "Value is : ";
    cin >> x;
    cout << "Power is : ";
    cin >> y;
    cout << "Calculated value is : ";
    int a = power(x, y);
    cout << a;

    return 0;
}
