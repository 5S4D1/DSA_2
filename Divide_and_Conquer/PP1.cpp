/*
    Practice problems 1: Write a function calc_sum using divide-and-conquer algorithm to calculate the sum of an array
        of n integers.
*/
#include <iostream>
using namespace std;

int calc_sum(int array[], int start, int end)
{
    if (start == end)
        return array[start];
    if (start < end)
    {
        int mid = (start + end) / 2;
        int left_sum = calc_sum(array, start, mid);

        int right_sum = calc_sum(array, ++mid, end);

        return left_sum + right_sum;
    }
    return 0;
}

int main()
{
    int n;
    cout << "size of array: ";
    cin >> n;
    int array[n];
    if (n != 0)
        cout << "\ninput array element: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    cout << "Calculated sum is: " << calc_sum(array, 0, n - 1) << endl;

    return 0;
}