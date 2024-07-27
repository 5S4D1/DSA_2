/*
    9. Write a recursive program to find the products of the elements
        of an array of size n.
*/
#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    if (n == 0)
        return 1;
    return sum(arr, n - 1) * arr[n - 1];
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

    int total = sum(arr, n);
    cout << "\nThe sum of the elements of the array is: " << total << endl;

    return 0;
}