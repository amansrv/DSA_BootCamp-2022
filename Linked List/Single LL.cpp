// INSERTION OF NODE AT HEAD NODE IN LL: INSERTION OF HEAD

/*
STEPS:
Step-1: Use InsertAtHead() for add node
Step-2: Remove Null pointer tempnode
Step-3: Shift haed to Head node

*/
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = 0;
    }
};

void insertAtHead(Node *&head, int d)
{
    // New node create
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{

    Node *temp = head;
    while (temp != 0)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // created the new node
    Node *node1 = new Node(10);

    // Head Node
    Node *head = node1;
    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtHead(head, 15);
    print(head);

    return 0;
}



// INSERTION OF NODE AT TAIL NODE IN LL: INSERTION AT TAIL
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // Constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// code for add node at the tail postion of LL
void insertAtTail(node *&tail, int d)
{

    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

// code for print LL
void print(node *head)
{

    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    // Initial node for LL
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);

    // creating and printing node at Tail of LL
    insertAtTail(tail, 15);
    print(head);

    insertAtTail(tail, 20);
    print(head);

    return 0;
}



// INSERTION OF NODE in Middle NODE IN LL: INSERTION AT Middle
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

void insertAtTail(node *&tail, int d)
{

    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

void print(node *head)
{

    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtposition(node *&head, int position, int data)
{
    node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    node *nodetoinsert = new node(data);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

int main()
{
    // initial node of LL
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);

    // Step1: create LL by adding node at last
    insertAtTail(tail, 15);
    print(head);

    insertAtTail(tail, 20);
    print(head);

    insertAtTail(tail, 25);
    print(head);
    
    // adding node in middle
    insertAtposition(head, 1, 100);
    print(head);

    return 0;
}
