#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

// Doubly linked list class
class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    // Add a node to the end of the list
    void addNode(int data) {
        Node* newNode = new Node(data);

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Remove a node from the list
    void removeNode(int data) {
        Node* current = head;

        while (current != nullptr) {
            if (current->data == data) {
                if (current == head && current == tail) {
                    head = nullptr;
                    tail = nullptr;
                }
                else if (current == head) {
                    head = current->next;
                    head->prev = nullptr;
                }
                else if (current == tail) {
                    tail = current->prev;
                    tail->next = nullptr;
                }
                else {
                    current->prev->next = current->next;
                    current->next->prev = current->prev;
                }

                delete current;
                return;
            }

            current = current->next;
        }
    }

    // Print the list in forward order
    void printForward() {
        Node* current = head;

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }

        cout << endl;
    }

    // Print the list in reverse order
    void printReverse() {
        Node* current = tail;

        while (current != nullptr) {
            cout << current->data << " ";
            current = current->prev;
        }

        cout << endl;
    }
};

// Main function for testing
int main() {
    DoublyLinkedList myList;

    myList.addNode(5);
    myList.addNode(10);
    myList.addNode(15);

    myList.printForward();
    myList.printReverse();

    myList.removeNode(10);

    myList.printForward();
    myList.printReverse();

    return 0;
}

