#include <iostream>
using namespace std;
class Node {
public:
    Node(int data) : data_(data), next_(NULL) {}
    int getData() const { return data_; }
    Node* getNext() const { return next_; }
    void setNext(Node* next) { next_ = next; }

private:
    int data_;
    Node* next_;
};
void swapNodes(Node*& head, Node* node1, Node* node2) {
    if (!node1 || !node2 || node1 == node2) {
        return;
    }
    Node* prev1 = NULL;
   Node* curr1 = head;
    while (curr1 && curr1 != node1) {
        prev1 = curr1;
        curr1 = curr1->getNext();
    }
    Node* prev2 = NULL;
    Node* curr2 = head;
    while (curr2 && curr2 != node2) {
        prev2 = curr2;
        curr2 = curr2->getNext();
    }
    if (!curr1 || !curr2) {
        return;
    }
     if (prev1) {
        prev1->setNext(curr2);
    } else {
        head = curr2;
    }

    if (prev2) {
        prev2->setNext(curr1);
    } else {
        head = curr1;
    }

    Node* temp = curr1->getNext();
    curr1->setNext(curr2->getNext());
    curr2->setNext(temp);
}
Node* partition(Node*& head, Node* start, Node* end) {
    if (!head || !start || !end || start == end) {
        return end;
    }

    Node* pivot = end;
    Node* i = start;
    Node* j = start;
    while (j != pivot) {
        if (j->getData() < pivot->getData()) {
            swapNodes(head, i, j);
            i = i->getNext();
        }
        j = j->getNext();
    }
    swapNodes(head, i, pivot);
    return i;
}
void quickSort(Node*& head, Node* start, Node* end) {
    if (!head || !start || !end || start == end) {
        return;
    }

    Node* pivot = partition(head, start, end);
    quickSort(head, start, pivot->getNext());
    quickSort(head, pivot->getNext(), end);
}
void printList(Node* head) {
    while (head) {
        cout << head->getData() << " ";
        head = head->getNext();
    }
    cout << endl;
}
int main() {
    Node* head = new Node(10);
    head->setNext(new Node(7));
    head->getNext()->setNext(new Node(8));
    head->getNext()->getNext()->setNext(new Node(9));
    head->getNext()->getNext()->getNext()->setNext(new Node(1));
    head->getNext()->getNext()->getNext()->getNext()->setNext(new Node(5));
    head->getNext()->getNext()->getNext()->getNext()->getNext()->setNext(new Node(3));
    quickSort(head, head, NULL);
    printList(head);

    return 0;
}


