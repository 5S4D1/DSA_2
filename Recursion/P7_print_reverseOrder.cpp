/*
    7. Write a recursive program to print an array of size n in reverse order.
*/
#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    if (n == 0)
        return;
    cout << arr[n - 1] << " ";
    print(arr, n - 1);
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

    cout << "\nThe array in reverse order is: ";
    print(arr, n);

    return 0;
}