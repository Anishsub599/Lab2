// #include <iostream>
// using namespace std;

// struct stack
// {
//     int top;
//     int size;
//     int *arr;

//     stack()
//     {
//         top = -1;
//     }
// } st;

// bool isFull(stack st)
// {
//     if (st.top == st.size - 1)
//     {
//         return true;
//     }
//     return false;
// }

// bool isEmpty(stack st)
// {
//     if (st.top == -1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// void top(stack st)
// {
//     cout << endl
//          << "The Value at the peek is " << st.arr[st.top] << endl;
// }

// void push(stack *st, int data)
// {
//     if (st->top == st->size - 1)
//     {
//         cout << "Overflown Condition" << endl;
//     }
//     else
//     {
//         st->top++;
//         st->arr[st->top] = data;
//     }
// }

// int pop(stack *st)
// {
//     int x;
//     if (st->top == -1)
//     {
//         cout << "underflown Condition " << endl;
//     }
//     else
//     {
//         st->top--;
//     }

//     cout << endl
//          << "Popped Successfully " << endl;
//     return x;
// }

// void display(stack st)
// {
//     for (int i = st.top; i >= 0; i--)
//     {
//         cout << st.arr[i] << endl;
//     }
// }
class StackArray
{
private:
    int *array;
    int topIndex;
    int capacity;

public:
    StackArray(int size);
    ~StackArray();
    bool isFull();
    bool isEmpty();
    void push(int element);
    int pop();
    int top();
};
