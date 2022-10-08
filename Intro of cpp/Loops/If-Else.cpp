#include <iostream>
using namespace std;
// a-z = lowerr
// A-Z = upper
// 0-9 = number

int main()
{
    char ch;
    cout << "enter the char" << endl;
    cin >> ch;

    if (ch >= 97 || ch <= 122)
    {
        cout << "lower" << endl;
    }
    else if (ch >= 65 || ch <= 90)
    {
        cout << "upper" << endl;
    }
    else
    {
        cout << "number" << endl;
    }

    return 0;
}
