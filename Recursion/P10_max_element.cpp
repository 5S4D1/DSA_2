/*
    10. Write a recursive program to find the maximum of the elements 
        of an array of size n.
*/
#include <iostream>
using namespace std;

int max_element(int array[], int size)
{
    if (size == 0)
        return array[0];
    return max(max_element(array, size - 1), array[size]);
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
    // call 'max_element' function and return a int number.
    int maximum = max_element(array, n - 1);
    cout << "Maximum element is: " << maximum << endl;

    return 0;
}