#include <iostream>
#include <stack>

using namespace std;

void breakStackIntoHalves(stack<char>& originalStack, stack<char>& firstHalf, stack<char>& secondHalf) {
    int size = originalStack.size();
    int halfSize = size / 2;

    for (int i = 0; i < halfSize; i++) {
        int element = originalStack.top();
        originalStack.pop();
        firstHalf.push(element);
    }

    while (!originalStack.empty()) {
        int element = originalStack.top();
        originalStack.pop();
        secondHalf.push(element);
    }
}

int main() {
    stack<char> originalStack;
    stack<char> firstHalf;
    stack<char> secondHalf;

    originalStack.push('A');
    originalStack.push('B');
    originalStack.push('C');
    originalStack.push('D');
    originalStack.push('E');
     originalStack.push('F');

    breakStackIntoHalves(originalStack, firstHalf, secondHalf);

    cout<<" Same order \n";
    while (!secondHalf.empty()) {
        cout << secondHalf.top() << " "<<endl;
        secondHalf.pop();
    }
    while (!firstHalf.empty()) {
        cout << firstHalf.top() << " "<<endl;
        firstHalf.pop();
    }
 
}

