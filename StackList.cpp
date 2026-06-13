#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int x = 0)
    {
        data = x;
        next = NULL;
    }
};
class StackList
{
public:
    int sz;
    Node *head;

    StackList()
    {
        sz = 0;
        head = NULL;
    }

    int size()
    {
        return sz;
    }
    void push(int key) // InsertHead
    {
        Node *temp = new Node(key);
        temp->next = head;
        head = temp;
        sz++;
    }
    int pop() // DelHead
    {
        if (head == NULL)
        {
            return -1;
        }
        int rem = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        sz--;
        return rem;
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "List is Empty\n";
            return -1;
        }
        return head->data;
    }
    bool isEmpty()
    {
        return (head == NULL);
    }
};

int main()
{

    StackList s;
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