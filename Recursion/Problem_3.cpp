/*
    3. Write a recursive program to print the n'th Fibonacci number.
*/
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int a)
{
    if (a == 1)
        return 0;
    else if (a == 2)
        return 1;

    return fibonacci(a - 1) + fibonacci(a - 2);
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n);

    return 0;
}
