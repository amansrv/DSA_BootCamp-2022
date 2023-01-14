#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void SayDigit(int num, string arr[])
{
    // base case
    if (num == 0)
    {
        return;
    }

    // calculation
    int digit = num % 10;
    num = num / 10;

    // relation
    SayDigit(num, arr);
    cout << arr[digit] << " ";
}

int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int n; // init the N digit number
    cout << "Enter the number: " << endl;
    cin >> n;

    SayDigit(n, arr);
    return 0;
}