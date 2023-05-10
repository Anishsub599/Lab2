#include "../include/StackArray.h"
#include "../include/StackLinkedList.h"
#include <iostream>
using namespace std;

void testStack(StackArray &stack)
{
    stack.push(5);
    stack.push(6);
    stack.push(7);
    cout << "first pop element: " << stack.pop() << endl;    // 7
    cout << "second pop element:" << stack.pop() << endl;    // 6
    cout << "remaining top element:" << stack.top() << endl; // 5
    cout << "last pop element: " << stack.pop() << endl;     // 5
    cout << "no element remaining: " << stack.pop() << endl; // Error: Stack is empty
}

void testStack(StackLinkedList &stack)
{
    stack.push(5);
    stack.push(6);
    stack.push(7);
    cout << "first pop element: " << stack.pop() << endl;    // 7
    cout << "second pop element:" << stack.pop() << endl;    // 6
    cout << "remaining top element:" << stack.top() << endl; // 5
    cout << "last pop element: " << stack.pop() << endl;     // 5
    cout << "no element remaining: " << stack.pop() << endl; // Error: Stack is empty
}

int main()
{
    StackArray stackArray(7);
    cout << "Testing StackArray:" << endl;
    testStack(stackArray);

    StackLinkedList stackLinkedList;
    cout << "\nTesting StackLinkedList:" << endl;
    testStack(stackLinkedList);

    return 0;
}