#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Node {
public:
    string url;
    Node* next;

    Node(const string& url) {
        this->url = url;
        next = NULL;
    }
};

class WebBrowser {
private:
    Node* head;
    stack<string> history;

public:
    WebBrowser() {
        head = NULL;
    }

    void visit(const string& url) {
        Node* newNode = new Node(url);
        newNode->next = head;
        head = newNode;
        history.push(url);
    }

    void navigateBack(int steps) {
        if (steps > history.size()) {
            cerr << "Cannot navigate back " << steps << " steps: history does not have enough entries." << endl;
            return;
        }
        for (int i = 0; i < steps; i++) {
            history.pop();
        }
        for (int i = 0; i < steps; i++) {
            Node* nodeToDelete = head;
            head = head->next;
            delete nodeToDelete;
        }
    }

    void printHistory() {
        Node* curr = head;
        while (curr != NULL) {
            cout << curr->url << endl;
            curr = curr->next;
        }
    }
};

int main() {
    WebBrowser myBrowser;

    myBrowser.visit("Google");
    myBrowser.visit("Facebook");
    myBrowser.visit("Twitter");
    myBrowser.visit("LinkedIn");
    myBrowser.visit("Instagram");

    cout << "Before navigating back:" << endl;
    myBrowser.printHistory();

    myBrowser.navigateBack(2);

    cout << "After navigating back twice:" << endl;
    myBrowser.printHistory();

    return 0;
}

