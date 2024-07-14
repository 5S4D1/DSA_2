/*
    Write a code to solve this problem using a greedy algorithm.
    time complexity of this code O(n).
*/
#include <iostream>
using namespace std;
int main()
{
    int distance, miles, size;
    cin >> distance >> miles >> size;
    int station[size];

    for (int i = 0; i < size; i++)
    {
        // input all gas station in this array
        cin >> station[i];
    }

    int currentPosition = station[0];
    for (int i = 0; i < size - 1; i++)
    {
        if (station[i + 1] - currentPosition >= miles)
        {
            cout << "stop at gas station " << i + 1 << "( " << station[i] << " miles)" << endl;
            currentPosition = station[i];
        }
    }

    return 0;
}