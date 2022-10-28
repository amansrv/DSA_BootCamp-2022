#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i = size - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j = size; j++)
        {
            if (arr[j] < arr[min])
            {
                int min = j;
            }
            swap(arr[min], arr[i]);
        }
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[5] = {6, 7, 4, 2, 0};
    int size = 5;
    selectionSort(arr, size);
    print(arr, size);
    return 0;
}