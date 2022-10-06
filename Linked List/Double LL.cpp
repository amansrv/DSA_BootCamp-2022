// INSERTION OF NODE AT: Different Postitions in a Double LL

//A. Insertion of Node at Head in DLL
#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *next;
    node *prev;

    // constructor
    node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAthead(node *&tail, node *&head, int d)
{

    // Edge Case:
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    }

    // Normal Case:
    else
    {
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
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

int main()
{
    node *head = NULL;
    node *tail = NULL;
    print(head);

    // Using insertAthead
    insertAthead(tail, head, 10);
    print(head);

    insertAthead(tail, head, 15);
    print(head);

    insertAthead(tail, head, 20);
    print(head);

    return 0;
}
