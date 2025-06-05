#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node()
    {
    next = NULL;
    }
};

// STACK CLASS
class stack
{
private:
Node *top // pointer to the top node of the stack

public:
stack()
{
top = NULL; // intialize the stack with a null top pointer 
}

//push operation insert an elemenet onto the top of the stack
int push (int value)
{
Node* newNode = new Node(); 
Node* data = value; 

}

}