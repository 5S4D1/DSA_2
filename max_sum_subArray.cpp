#include <iostream>
using namespace std;

int maxSumSubArray(int array[], int n)
{
    int res = array[0];
    for (int i = 0; i < n; i++)
    {
        int currentSum = 0;

        for (int j = i; j < n; j++)
        {
            currentSum += array[j];
            res = max(res, currentSum);
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Maximum-Sum Subarray is: " << maxSumSubArray(array, n);

    return 0;
}