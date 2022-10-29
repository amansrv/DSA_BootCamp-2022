#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <array>
using namespace std;

int main()
{
    // normal arrays
    /*
    int arr[5] = {0, 1, 2, 34, 5};
    cout << "The size of array: " << sizeof(arr) << endl;
    return 0;

    */

    // stl arrays
    array<int, 5> aman = {1, 2, 3, 4, 5};

    for (int i = 0; i <= 5; i++)
    {
        cout << aman[i] << endl;
    }
    cout << "The size of array: " << sizeof(aman) << endl;
    return 0;
}
