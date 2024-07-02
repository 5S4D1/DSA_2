/*
    Practice problems 2: Write a function calc_sum using divide-and-conquer algorithm to calculate the sum of the even
        numbers of an array of n integers.
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
        if (left_sum % 2 == 0 && right_sum % 2 == 0)
            return left_sum + right_sum;
        else if (left_sum % 2 == 0)
            return left_sum;
        else if (right_sum % 2 == 0)
            return right_sum;
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
    cout << "Calculated sum of even number's is: " << calc_sum(array, 0, n - 1) << endl;

    return 0;
}