// prime or not
// n % 2 == 0 -> not prime
// n % 2 != 0 -> prime

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "the number is not prime = " << i << endl;
        }
        else
        {
            cout << "the number is prime = " << i << endl;
        }
        i++;
    }
}
