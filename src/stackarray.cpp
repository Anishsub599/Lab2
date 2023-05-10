// #include "include/stack.h"
// #include <iostream>

// using namespace std;

// int main()
// {
//     cout << "Enter the size of the stack :" << endl;
//     cin >> st.size;

//     st.arr = new int[st.size];
//     st.top = -1;

//     if (st.arr != NULL)
//     {
//         cout << "Created stack of size " << st.size << endl;
//     }

//     push(&st, 5);
//     push(&st, 4);
//     push(&st, 3);
//     push(&st, 2);
//     push(&st, 1);

//     display(st);

//     pop(&st);
//     display(st);
//     top(st);

//     return 0;
// }
#include "../include/StackArray.h"
#include <iostream>
using namespace std;

StackArray::StackArray(int size)
{
    capacity = size;
    array = new int[capacity];
    topIndex = -1;
}

StackArray::~StackArray()
{
    delete[] array;
}

bool StackArray::isFull()
{
    return topIndex == capacity - 1;
}

bool StackArray::isEmpty()
{
    return topIndex == -1;
}

void StackArray::push(int element)
{
    if (isFull())
    {
        cout << "Error: Stack is full" << endl;
        return;
    }
    topIndex++;
    array[topIndex] = element;
}

int StackArray::pop()
{
    if (isEmpty())
    {
        cout << "Error: Stack is empty" << endl;
        return -1;
    }
    int element = array[topIndex];
    topIndex--;
    return element;
}

int StackArray::top()
{
    if (isEmpty())
    {
        cout << "Error: Stack is empty" << endl;
        return -1;
    }
    return array[topIndex];
}