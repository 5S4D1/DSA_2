/*
    1. Write a recursive implementation of the factorial function.
    Recall that n! = 1 * 2*...*n, with the special case that 0! = 1.
*/
#include <bits/stdc++.h>
using namespace std;

int fact(int a)
{
    if (a == 0)
        return 1;
    return a * fact(a - 1);
}

int main()
{
    int a;
    cout << "Number is : ";
    cin >> a;
    cout << "Factorial is : ";
    int x = fact(a);
    cout << x;

    return 0;
}