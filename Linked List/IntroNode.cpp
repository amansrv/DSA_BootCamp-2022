// Print the data and address of Node

// A. without use of Constructor
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *node1 = new Node();

    cout << node1->data << endl;
    cout << node1->next << endl;

    return 0;
}

// B. With the use of Constructor
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{

    node *node2 = new node(20);
    cout << node2->data << endl;
    cout << node2->next << endl;
    return 0;
}
