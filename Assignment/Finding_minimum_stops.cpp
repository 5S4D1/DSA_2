/*
    Write a code to solve this problem using a greedy algorithm.
    Keep the time complexity of your code O(n).
*/
#include <iostream>
using namespace std;

int minimum_stop(int distance, int miles, int size, int station[])
{
    int gas_station[size + 2];
    gas_station[0] = 0; // set 0 in start position
    for (int i = 0; i < size; i++)
    {
        gas_station[i + 1] = station[i];
    }
    gas_station[size + 1] = distance; // set distance in last position.

    int NumOfStops = 0;
    int currentPosi = 0;

    while (currentPosi < size + 1)
    {
        int lastPosi = currentPosi;
        // Move to the farthest reachable gas station
        while (currentPosi < size + 1 && gas_station[currentPosi + 1] - gas_station[lastPosi] <= miles)
        {
            currentPosi++;
        }
        if (currentPosi == lastPosi)
        {
            return -1;
        }
        if (currentPosi < size + 1)
        {
            cout << "stop at gas station " << currentPosi << " (" << gas_station[currentPosi] << " miles)" << endl;
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