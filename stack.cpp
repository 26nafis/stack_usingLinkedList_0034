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
Node* next = top;
top = newNode; 
cout << "push value :" << value << endl;
return value;
}
// simply operation check if the stack in impty
bool isEmpaty()
{
return top == NULL; // return true if the top pointer is null, indicating an empty 
}

// pop operation: remove the top most element from the stack
void 

}