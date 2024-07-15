/*
    5. Write a recursive program to print the even numbers in a given range.
*/
#include <bits/stdc++.h>
using namespace std;

void printEven(int start, int end)
{
    if (start > end)
        exit(1);
    cout << start <<" ";
    printEven(start + 2, end);
}

int main()
{
    int from, to;
    cin >> from >> to;

    if (from % 2 != 0)
        from++;

    printEven(from, to);

    return 0;
}