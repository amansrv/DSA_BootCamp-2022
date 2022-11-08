#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

bool BinarySearch(int arr[], int size, int key)
{
    // init  S and E with find out the mid value
    int start = 0;
    int end = size - 1;
    int mid = start + end / 2;

    // comapre the mid with array size

    for (int i = 0; i <= size; i++)
    {
        if (arr[mid] == key)
        {
            return key;
        }
        else if (arr[mid] > key)
        {
            // Left part
            end = mid - 1;
        }
        else
        {
            // right part
            start = mid + 1;
        }
    }

    int main()
    {

        int arr[5] = {4, 6, 8, 10, 15};
        int size = 5;
        int key;

        cout << "Enter the key" << endl;
        cin >> key;

        int = BinarySearch(arr, size, key);
        cout << index;

        return 0;
    }