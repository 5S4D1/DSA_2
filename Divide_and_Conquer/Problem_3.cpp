#include <iostream>
using namespace std;

void max_min(int array[], int i, int j, int *max, int *min)
{
    int max1, max2, min1, min2;
    if (i == j)
    {
        *max = array[i];
        *min = array[i];
    }
    else if (j == i + 1)
    {
        (array[i] > array[j]) ? *max = array[i], *min = array[j] : *max = array[j], *min = array[i];
    }
    else
    {
        int mid = (i + j) / 2;
        max_min(array, i, mid, &max1, &min1);

        max_min(array, mid + 1, j, &max2, &min2);

        *max = (max1 > max2) ? max1 : max2;

        *min = (min1 < min2) ? min1 : min2;
    }
}

int main()
{
    int n;
    cout<<"size of array: ";
    cin >> n;
    int array[n];
    cout<<"\ninput array element: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int max_number, min_number;
    max_min(array, 0, n - 1, &max_number, &min_number);

    cout << "Maximum value is: " << max_number << "\nMinimum value is: " << min_number << endl;

    return 0;
}