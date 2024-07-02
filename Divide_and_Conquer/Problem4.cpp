#include <iostream>
using namespace std;

int binarySearch(int array[], int start, int end, int key)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;
        if (array[mid] == key)
            return mid;
        else if (key < array[mid])
            return binarySearch(array, start, mid - 1, key);
        else
            return binarySearch(array, mid + 1, end, key);
    }
    else
        return -1;
}

int main()
{
    int n, key;
    cout << "length of array is: ";
    cin >> n;
    int array[n];
    // array is must be sorted
    cout << "\nInput array element: ";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "\nkey: ";
    cin >> key;

    int position = binarySearch(array, 0, n - 1, key);
    if (position == -1)
        cout << "NOT FOUND." << endl;
    else
        cout << "Found on position " << position << endl;

    return 0;
}