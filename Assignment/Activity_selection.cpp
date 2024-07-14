/*
    activity selection problem.
    Given a set of intervals, find the maximum number of activities that can be performed by a single person
*/
#include <bits/stdc++.h>
using namespace std;

// The following implementation are sorted according to their finish time
void Sort(int array1[], int array2[], int length)
{
    int i, j;
    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (array2[j] > array2[j + 1])
            {
                int temp1 = array1[j];
                int temp2 = array2[j];
                array1[j] = array1[j + 1];
                array2[j] = array2[j + 1];
                array1[j + 1] = temp1;
                array2[j + 1] = temp2;
            }
        }
    }
}

void printMaxActivities(int start[], int finish[], int size)
{
    // first, sort element by there finish time.
    Sort(start, finish, size);
    int i, j;

    cout << "Following activities are selected: " << endl;

    // The first activity always gets selected
    i = 0;
    cout << i << " ";

    // Consider rest of the activities
    for (j = 1; j < size; j++)
    {
        /*
            If this activity has start time greater than or
            equal to the finish time of previously selected
            activity, then select it.
        */
        if (start[j] >= finish[i])
        {
            cout << j << " ";
            i = j;
        }
    }
}

// Driver code
int main()
{
    int start[] = {1, 3, 2, 0, 8, 5};
    int finish[] = {2, 4, 5, 7, 10, 8};
    int n = sizeof(start) / sizeof(start[0]);

    // Function call
    printMaxActivities(start, finish, n);

    return 0;
}