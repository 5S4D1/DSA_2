/*
    6. Write a recursive program to print an array of size n in given order.
*/
#include <iostream>
using namespace std;

void print(int arr[], int start, int n)
{
    if (n == start)
        return;
    cout << arr[start] << " ";
    print(arr, start + 1, n);
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

    cout << "\nThe array in given order is: ";
    print(arr, 0, n);

    return 0;
}