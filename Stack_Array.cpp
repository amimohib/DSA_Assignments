#include <iostream>
using namespace std;
// pure vanilla array
class StackArray
{
public:
    int capacity;
    int *arr;
    int top;
    StackArray(int s)
    {
        capacity = s;
        arr = new int[capacity];
        top = -1;
    }
    void push(int value) // overflow
    {
        if (isFull())
        {
            cout << "Stack is Full\n";
            return;
        }
        arr[++top] = value;
    }
    int pop() //
    {
        if (isEmpty())
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        int rem = arr[top--];
        return rem;
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }
    int size()
    {
        return (top + 1);
    }
    bool isEmpty()
    {
        return (top == -1);
    }
    bool isFull()
    {
        return (top == (capacity - 1));
    }
};
int main()
{
    StackArray s(5);
    s.push(5);
    s.push(15);
    s.push(25);
    cout << s.peek() << endl;
    cout << s.pop() << endl;
    s.pop();
    cout << s.peek() << endl;
    cout << s.size() << endl;
    cout << s.pop() << endl;
    cout << s.isEmpty() << endl;

    return 0;
}