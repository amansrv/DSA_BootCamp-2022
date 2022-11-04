#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    cout << "the top: " << s.top() << endl;

    if (s.empty())
    {
        cout << "the stack is empty." << endl;
    }
    else
    {
        cout << "the stack is not empty" << endl;
    }
    return 0;
}