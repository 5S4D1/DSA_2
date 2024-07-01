#include <iostream>
using namespace std;

int countOdd(int array[], int start, int end)
{
    if (start == end)
    {
        if (array[start] % 2 == 0)
            return 1;
        else
            return 0;
    }
    else
    {
        int mid = (start + end) / 2;
        int first_half = countOdd(array, start, mid);
        int second_half = countOdd(array, mid + 1, end);

        return first_half + second_half;
    }
}

int main()
{
    int Array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(Array) / sizeof(int);

    cout << "Number of Even number in this array: " << countOdd(Array, 0, length - 1) << endl;

    return 0;
}