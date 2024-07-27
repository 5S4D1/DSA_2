/*
    15. Write a recursive program to count the odd/even numbers of an array of n integers.
*/
#include <iostream>
using namespace std;
// pass the 'even' and 'odd' variables address
void count(int array[], int n, int &even, int &odd)
{
    if (n == -1)
        return;
    // if number is even then even = even + 1
    if (array[n] % 2 == 0)
        even++;
    else
        odd++;

    count(array, n - 1, even, odd);
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

    int even, odd;
    even = odd = 0;
    count(arr, n - 1, even, odd);

    cout << "Total Even numbers in this array is: " << even << endl
         << "Total Odd numbers in this array is: " << odd << endl;

    return 0;
}