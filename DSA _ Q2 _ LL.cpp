#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;

    Node(int val)
   {
        data = val;
        next = NULL;
    }
};

int main() 
{
    cout << "Example 1:" << endl;

    Node* head1 = NULL;
    Node* ptr;
    Node* pptr;

    // create first linked list: (1 → 2 → 3 → 4 → 5)
    for (int i = 1; i <= 5; i++)
        {
        Node* newNode = new Node(i);

        if (head1 == NULL)
            head1 = newNode;
        else {
            pptr = head1;
            while (pptr->next != NULL)
                pptr = pptr->next;
            pptr->next = newNode;
        }
    }

    // To print the linked list
    cout << "Linked List: ";
    ptr = head1;
    while (ptr != NULL)
        {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    // To find the middle node using two pointers
    ptr = head1;
    pptr = head1;
    while (pptr != NULL && pptr->next != NULL)
        {
        ptr = ptr->next;
        pptr = pptr->next->next;
    }

    // To print the middle node and then onwards
    cout << "Middle node and onwards: ";
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
    cout << "Middle node is: 3" << endl << endl;


    cout << "Example 2:" << endl;
    Node* head2 = NULL;

    // create second linked list: (1 → 2 → 3 → 4 → 5 → 6)
    for (int i = 1; i <= 6; i++)
        {
        Node* newNode = new Node(i);

        if (head2 == NULL)
            head2 = newNode;
        else {
            pptr = head2;
            while (pptr->next != NULL)
                pptr = pptr->next;
            pptr->next = newNode;
        }
    }

    // To print the linked list
    cout << "Linked List: ";
    ptr = head2;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;

    // To find the middle node for the even number of nodes in the given list(1->2->3->4->5->6)
    ptr = head2;
    pptr = head2;
    while (pptr != NULL && pptr->next != NULL) 
    {
        ptr = ptr->next;
        pptr = pptr->next->next;
    }

    cout << "Middle node and onwards: ";
    while (ptr != NULL) 
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
    cout << "Since the list has two middle nodes (3 and 4), we return the second one." << endl;

    return 0;
}


