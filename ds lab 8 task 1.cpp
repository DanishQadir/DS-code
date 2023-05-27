#include <iostream>
#include <stack>
#include <string>

using namespace std;

class ToDoList {
private:
    stack<string> items;

public:
    void addItem(const string& item) {
        items.push(item);
    }

    bool isEmpty() {
        return items.empty();
    }

    string removeItem() {
        if (isEmpty()) {
            cerr << "Cannot remove item: list is empty" << endl;
            return "";
        }
        string topItem = items.top();
        items.pop();
        return topItem;
    }
};

int main() {
    ToDoList myToDoList;

    myToDoList.addItem("Attend meeting at 2pm");
    myToDoList.addItem("Buy groceries");
    myToDoList.addItem("Finish project by Friday");

    while (!myToDoList.isEmpty()) {
        cout << "Next item on to-do list: " << myToDoList.removeItem() << endl;
    }

    return 0;
}

