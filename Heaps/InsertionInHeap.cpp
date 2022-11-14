#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Heap
{
public:
    int arr[100];
    int size;

    // constructor
    Heap()
    {
        arr[0] = -1;
        size;
    }

    void InsertionInHeap(int data)
    {
        size = size + 1;
        int index = size;
        arr[index] = data;

        while (index > 1)
        {
            int partent = index / 2;

            if (arr[partent] < arr[index])
            {
                swap(arr[partent], arr[index]);
                index = partent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {

        for (int i = 1; i < size; i++)
        {
            cout << "the data" << arr[i] << endl;
        }
    }
};

int main()
{
    Heap h;
    h.InsertionInHeap(10);
    h.InsertionInHeap(30);
    h.InsertionInHeap(5);
    h.InsertionInHeap(90);
    h.InsertionInHeap(100);
    h.print();

    return 0;
}