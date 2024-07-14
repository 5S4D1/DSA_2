/*
    Write a code to solve this problem using a greedy algorithm.
    Keep the time complexity of your code O(n^2).
*/
#include <iostream>
using namespace std;

int minimum_stop(int distance, int miles, int size, int station[])
{
    int gas_station[size + 2];
    gas_station[0] = 0; // set 0 in start position as a starting point.
    // copy all element from station to gas_station.
    for (int i = 0; i < size; i++)
    {
        gas_station[i + 1] = station[i];
    }
    gas_station[size + 1] = distance; // set distance in last position as a end point.

    int NumOfStops = 0;
    int currentPosition = 0;

    while (currentPosition < size + 1)
    {
        int lastPosition = currentPosition; // lastPosition = where car last stoped.
        // Move to the farthest reachable gas station
        while (currentPosition < size + 1 && gas_station[currentPosition + 1] - gas_station[lastPosition] <= miles)
        {
            currentPosition++;
        }
        if (currentPosition == lastPosition)
        {
            return -1;
        }
        if (currentPosition < size + 1)
        {
            cout << "stop at gas station " << currentPosition << " (" << gas_station[currentPosition] << " miles)" << endl;
            NumOfStops++;
        }
    }
    return NumOfStops;
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

    int result = minimum_stop(distance, miles, size, station);
    if (result == -1)
    {
        cout << "It is not possible to reach the destination with the given gas stations." << endl;
    }

    return 0;
}