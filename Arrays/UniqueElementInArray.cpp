#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int UniqueNum(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

void PrintAns(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[10] = {1, 1, 2, 2, 3, 4, 5, 5, 6, 6};
    int size = 10;

    UniqueNum(arr, size);
    PrintAns(arr, size);
    return 0;
}