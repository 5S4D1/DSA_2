/*
    11. Write a recursive program to find the minimum of the elements 
        of an array of size n.
*/
#include <iostream>
using namespace std;

int min_element(int array[], int size)
{
    if (size == 0)
        return array[0];
    return min(min_element(array, size - 1), array[size]);
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

    cout << "Minimum element is: " << min_element(array, n - 1) << endl;

    return 0;
}