#include <iostream>     // used for input and output
using namespace std;

// This class represents a single node in the linked list
class Node {
public:
    int data;           // stores the value inside the node
    Node* next;         // pointer to the next node in the list

    // Constructor to set data and initialize next as NULL
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// This class represents the full linked list
class LinkedList {
public:
    Node* head;         // pointer to the first node (head) of the linked list

    // Constructor initializes the head to NULL (empty list)
    LinkedList() {
        head = NULL;
    }

    // Function to insert a new node at the end of the list
    void insert(int val) {
        Node* newNode = new Node(val);  // create a new node with given value

        // If the list is empty, newNode becomes the head
        if (head == NULL) {
            head = newNode;
        }
        else {
            // Otherwise, go to the last node
            Node* temp = head;
            while (temp->next != NULL) {  // move till last node
                temp = temp->next;
            }
            temp->next = newNode;         // link new node at the end
        }
    }

    // Function to print all nodes starting from the given node
    void display(Node* node) {
        while (node != NULL) {             // loop until the list ends
            cout << node->data << " ";     // print data of each node
            node = node->next;             // move to next node
        }
        cout << endl;
    }

    // Function to find and return the middle node of the linked list
    Node* findMiddle() {
        Node* first = head;     // pointer that moves one step at a time
        Node* second = head;    // pointer that moves two steps at a time

        // Traverse the list until 'second' reaches the end
        while (second != NULL && second->next != NULL) {
            first = first->next;           // move by 1 node
            second = second->next->next;   // move by 2 nodes
        }

        // When 'second' reaches end, 'first' will be at the middle
        return first;
    }
};

int main() {

    // Example 1: Odd number of nodes (1 → 2 → 3 → 4 → 5)
    cout << "Example 1:" << endl;
    LinkedList list1;                // create first linked list
    list1.insert(1);                 // add nodes one by one
    list1.insert(2);
    list1.insert(3);
    list1.insert(4);
    list1.insert(5);

    cout << "Linked List: ";
    list1.display(list1.head);       // display full linked list

    Node* mid1 = list1.findMiddle(); // find the middle node
    cout << "Middle node and onwards: ";
    list1.display(mid1);             // display from the middle node till end

    // Explanation message for first picture
    cout << "The middle node of the list is 3." << endl;

    cout << endl;                    // line break between examples

    // Example 2: Even number of nodes (1 → 2 → 3 → 4 → 5 → 6)
    cout << "Example 2:" << endl;
    LinkedList list2;                // create second linked list
    list2.insert(1);
    list2.insert(2);
    list2.insert(3);
    list2.insert(4);
    list2.insert(5);
    list2.insert(6);

    cout << "Linked List: ";
    list2.display(list2.head);       // display full list

    Node* mid2 = list2.findMiddle(); // find the middle node (second middle if even)
    cout << "Middle node and onwards: ";
    list2.display(mid2);             // print nodes from the middle to the end

    // Explanation message for second picture
    cout << "Since the list has two middle nodes with values 3 and 4, we return the second one." << endl;

    return 0;   // program ends successfully
}
