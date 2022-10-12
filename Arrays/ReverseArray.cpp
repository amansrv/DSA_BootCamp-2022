#include <iostream>
#include <bits/stdc++.h>
using namespace std;

reverseArr(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void PrintArr(int arr[], int n)
{
    cout << "After Reverse: " << endl;
    for (int i = 0; i < 5; i++)
        cout << arr[i] << endl;
}

int main()
{
    int arr[5] = {0, -1, 5, 8, 9};
    int n = 5;
    cout << "Before Revese: " << endl;
    for (int i = 0; i < 5; i++)
        cout << arr[i] << endl;

    reverseArr(arr, 5);
    PrintArr(arr, 5);
    return 0;
}