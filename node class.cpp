#include<iostream>
using namespace std;

class Node {
public:
int data;
Node* next;
// Default constructor
Node()
{
data = 0;
next = NULL;
}
// Parameterised Constructor
Node(int data)
{
this-&gt;data = data;
this-&gt;next = NULL;
}
};
