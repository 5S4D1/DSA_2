/*
    13. Write a recursive program to print the odd/even numbers of an array of n integers.
*/
#include <iostream>
using namespace std;
// function for print even numbers
void even(int arr[], int n)
{
    if (n == -1)
        return;
    if (arr[n] % 2 == 0)
        cout << arr[n] << " ";

    even(arr, n - 1);
}
// function for print odd numbers
void odd(int arr[], int n)
{
    if (n == -1)
        return;
    if (arr[n] % 2 != 0)
        cout << arr[n] << " ";

    odd(arr, n - 1);
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Even numbers in this array is: ";
    // call even function
    even(arr, n - 1);

    cout << "\nOdd numbers in this array is: ";
    // call odd function
    odd(arr, n - 1);

    return 0;
}