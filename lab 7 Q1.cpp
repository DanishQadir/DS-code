#include <iostream>
#include <string>
using namespace std;
class StudentRecord {
public:
    StudentRecord(string name, int score) : name_(name), score_(score) {}

    string getName() const { return name_; }
    int getScore() const { return score_; }

private:
    string name_;
    int score_;
};
class Node {
public:
    Node(StudentRecord record) : record_(record), next_(NULL) {}

    StudentRecord getRecord() const { return record_; }
    Node* getNext() const { return next_; }
    void setNext(Node* next) { next_ = next; }

private:
    StudentRecord record_;
    Node* next_;
};
Node* newNode(StudentRecord record) {
    return new Node(record);
}
void insert(Node*& head, Node* node) {
    if (!head || node->getRecord().getScore() < head->getRecord().getScore()) {
        node->setNext(head);
        head = node;
    } else {
        Node* curr = head;
        while (curr->getNext() && node->getRecord().getScore() >= curr->getNext()->getRecord().getScore()) {
            curr = curr->getNext();
        }
        node->setNext(curr->getNext());
        curr->setNext(node);
    }
}
void printList(Node* head) {
    while (head) {
        cout << head->getRecord().getName() << ": " << head->getRecord().getScore() << endl;
        head = head->getNext();
    }
}
int getMaxDigits(Node* head) {
    int maxDigits = 0;
    while (head) {
        int digits = 0;
        int score = head->getRecord().getScore();
        while (score > 0) {
            digits++;
            score /= 10;
        }
        if (digits > maxDigits) {
            maxDigits = digits;
        }
        head = head->getNext();
    }
    return maxDigits;
}


void countingSort(Node*& head, int exp) {
    Node* output = NULL;
    int count[10] = { 0 };
    Node* curr = head;
    while (curr) {
        int digit = (curr->getRecord().getScore() / exp) % 10;
        count[digit]++;
        curr = curr->getNext();
    }
    for (int i = 1; i < 10; i++) {
        count[i] += count[i-1];
    }
    curr = head;
    while (curr) {
        int digit = (curr->getRecord().getScore() / exp) % 10;
        Node* node = newNode(curr->getRecord());
        insert(output, node);
        count[digit]--;
        curr = curr->getNext();
    }
    head = output;
}

void radixSort(Node*& head) {
    int maxDigits = getMaxDigits(head);
    for (int exp = 1; exp <= maxDigits; exp++) {
        countingSort(head, exp);
    }
}

int main() {
    Node* head = NULL;
    insert(head, newNode(StudentRecord("Ali", 95)));
    insert(head, newNode(StudentRecord("Bablu", 87)));
    insert(head, newNode(StudentRecord("Basit", 72)));
    insert(head, newNode(StudentRecord("Daniyal", 92)));
    insert(head, newNode(StudentRecord("shakoor", 68)));
    radixSort(head);
    printList(head);
    return 0;
}


   

