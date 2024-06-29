/*
    22. Write a recursive program to count the number of digits of an integer.
*/
#include <bits/stdc++.h>
using namespace std;

int sum(int a)
{
    if (a == 0)
        return a;
    return a + sum(a - 1);
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Sum of digits of " << a << " is = " << sum(a) << endl;

    return 0;
}