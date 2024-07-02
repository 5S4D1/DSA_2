#include <iostream>
using namespace std;

void merge(int arr[], int p, int q, int r)
{
    // Create L ← A[p..q] and M ← A[q+1..r]
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1], M[n2];

    int i, j, k;
    for (i = 0; i < n1; i++)
        L[i] = arr[p + i];

    for (j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];

    // Maintain current index of sub-arrays and main array
    i = j = 0;
    k = p;

    while (i < n1 && j < n2)
    {
        if (L[i] >= M[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergesort(int array[], int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergesort(array, l, mid);
        mergesort(array, mid + 1, r);

        merge(array, l, mid, r);
    }
}

int main()
{
    int n;
    cout << "size of array: ";
    cin >> n;
    int array[n];
    if (n == 0)
        return 0;
    cout << "\ninput array element: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    mergesort(array, 0, n - 1);
    cout << "sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}