#include <iostream>
using namespace std;

struct student {
    int nu_id;
    int pin_code;
    int fee;
};

struct node {
    student data;
    node* next;
    node* prev;
};
class CircularLinkedList {
private:
    node* tail;
    int size;

public:
    CircularLinkedList() {
        tail = NULL;
        size = 0;
    }

    bool isEmpty() {
        return tail == NULL;
    }

    int getSize() {
        return size;
    }

    void insert(int nu_id, int pin_code) {
        node* new_node = new node;
        new_node->data.nu_id = nu_id;
        new_node->data.pin_code = pin_code;

        if (isEmpty()) {
            new_node->next = new_node;
            new_node->prev = new_node;
            tail = new_node;
        } else {
            new_node->next = tail->next;
            new_node->prev = tail;
            tail->next->prev = new_node;
            tail->next = new_node;
        }

        size++;
    }

    void remove() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
        } else {
            node* temp = tail->next;

            if (tail == tail->next) {
                tail = NULL;
            } else {
                tail->next = temp->next;
                temp->next->prev = tail;
            }

            delete temp;
            size--;
        }
    }

    int getPinCode(int nu_id) {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        } else {
            node* temp = tail->next;

            do {
                if (temp->data.nu_id == nu_id) {
                    return temp->data.pin_code;
                }
                temp = temp->next;
            } while (temp != tail->next);

            cout << "NU-ID not found\n";
            return -1;
        }
    }
};

class DoublyLinkedList {
private:
    node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void insert(int nu_id, int fee) {
        node* new_node = new node;
        new_node->data.nu_id = nu_id;
        new_node->data.fee = fee;

        if (isEmpty()) {
            new_node->next = NULL;
            new_node->prev = NULL;
            head = new_node;
        } else {
            new_node->next = head;
            new_node->prev = NULL;
            head->prev = new_node;
            head = new_node;
        }
    }

    void remove() {
        if (isEmpty()) {
            cout << "List is empty\n";
        } else {
            node* temp = head;

            if (head->next == NULL) {
                head = NULL;
            } else {
                head = temp->next;
                head->prev = NULL;
            }

            delete temp;
        }
    }

    int getFee() {
        return head->data.fee;
    }
};

int main() {
    int n, nu_id, pin_code, fee;
    CircularLinkedList queue;
    DoublyLinkedList list;

    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter NU-ID for student " << i + 1 << ": ";
        cin >> nu_id;
        pin_code = nu_id % 10000;
    }
    queue.getPinCode(nu_id);
    queue.insert(nu_id,pin_code);
    queue.getSize();
    list.getFee();
    list.remove();
    list.isEmpty();list.remove();
}

