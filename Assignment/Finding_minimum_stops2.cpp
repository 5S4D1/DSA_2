/*
    Write a code to solve this problem using a greedy algorithm.
    time complexity of this code O(n).
*/
#include <iostream>
using namespace std;

void minimum_stop(int distance, int miles, int size, int station[])
{
    int gas_station[size + 2];
    gas_station[0] = 0;
    // copy all element from station to gas_station.
    for (int i = 0; i < size; i++)
    {
        gas_station[i + 1] = station[i];
    }
    gas_station[size + 1] = distance; // set distance in last position as a end point.

    int currentPosition = gas_station[0];

    for (int i = 0; i < size + 1; i++)
    {
        if (gas_station[i + 1] - currentPosition >= miles)
        {
            cout << "stop at gas station " << i << " ( " << gas_station[i] << " miles)" << endl;
            currentPosition = gas_station[i];
        }
    }
}

int main()
{
    /*
        distance = distance of starting point to ending point.
        miles = max distance passes with full tank of gas.
        size = how many gas station in this path
    */
    int distance, miles, size;
    cin >> distance >> miles >> size;
    int station[size];

    for (int i = 0; i < size; i++)
    {
        // input all gas station in this array
        cin >> station[i];
    }

    minimum_stop(distance, miles, size, station);

    return 0;
}