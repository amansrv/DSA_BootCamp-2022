#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 10;
    int *ptr = &num;

    cout << endl
         << endl
         << endl;

    cout << "the value at num: " << num << endl
         << endl;
    cout << "the address of num: " << &num << endl
         << endl;

    cout << "the value at address num: " << *ptr << endl
         << endl;
    cout << "the address of ptr: " << &ptr << endl
         << endl;

    return 0;
}