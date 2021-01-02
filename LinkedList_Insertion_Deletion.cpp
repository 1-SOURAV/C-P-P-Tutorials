#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
// Function to insert afte a given node 
void insertAfterANode(node *&prevNode, int val)
{
    if (prevNode == NULL)
    {
        cout << "Please enter correct value of Previous Node." << endl;
    }
    node *newNode = new node(val);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}

// Function to insert at the begining .
void insertAtTheBegining(node *&head, int val)
{
    node *newNode = new node(val);
    newNode->next = head;
    head = newNode;
}

// Function to insert at the end.
void instertAtTheEnd(node *&head, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Function to delete at the begining.
void deletionAtBeg(node *&head)
{
    node *nodeToDelete = head;
    head = head->next;

    delete nodeToDelete;
}

// Function to delete after a given node.
void deletion(node *&head, int val)
{
    if (head == NULL)
    {
        cout << "Underflow";
        return;
    }
    if (head->next == NULL)
    {
        deletionAtBeg(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }

    node *nodeToDelete = temp->next;
    temp->next = temp->next->next;

    delete nodeToDelete;
}

// Function to reverse a linked list using iterative method.
node *reverse(node *&head)
{
    node *prevPtr = NULL;
    node *currPtr = head;
    node *nextPtr;

    while (currPtr != NULL)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
}

// Function to reverse a linked list using recursion.
node *reverserercursive(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *newHead = reverserercursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

// Function to search an element in the linked list.
bool linearSearch(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

// Function ton display elements of the linked list.
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// .................................................Main Program.......................................................
int main()
{
    node *head = NULL;
    instertAtTheEnd(head, 1);
    instertAtTheEnd(head, 2);
    instertAtTheEnd(head, 3);
    instertAtTheEnd(head, 4);
    cout << "After inserting all the elements at the End of the linked list:- ";
    display(head);
    cout << linearSearch(head, 4) << endl;

    node *newHead = reverse(head);
    cout << "After reversing the linked list:- ";
    display(newHead);
    cout << linearSearch(newHead, 3) << endl;

    node *nayaHead = reverserercursive(newHead);
    cout << "After reversing the linked list by recursion:- ";
    display(nayaHead);

    insertAtTheBegining(head, 10);
    cout << "After inserting '10' at the begining of the linked list:- ";
    display(head);
    insertAtTheBegining(head, 15);
    cout << "After inserting '15' at the begining of the linked list:- ";
    display(head);
    insertAfterANode(head->next, 1456);
    cout << "After inserting 1456 after a node of the linked list:- ";
    display(head);
    deletion(head, 2);
    cout << "After deleting '2' from the linked list:- ";
    display(head);
    deletionAtBeg(head);
    cout << "After deleting the first element of the linked list:- ";
    display(head);

    return 0;
}
