#include <iostream>
using namespace std;
class queue
{
public:
    int sz, cap, front;
    int *arr;

    queue(int c)
    {
        cap = c;
        arr = new int[cap];
        front = 0;
        sz = 0;
    }

    bool empty() { return (sz == 0); }
    bool full() { return (sz == cap); }

    int getrear()
    {
        if (empty())
        {
            return -1;
        }
        else
        {
            return ((front + sz - 1) % cap);
        }
    }
    int getfront()
    {
        if (empty())
        {
            return -1;
        }
        else
        {
            return front;
        }
    }

    void enqueue(int x)
    {
        if (full())
        {
            return;
        }
        int rear = getrear();
        rear = (rear + 1) % cap;
        arr[rear] = x;
        sz++;
    }
    int dequeue()
    {
        if (empty())
        {
            return -1;
        }
        int rem = arr[front];
        front = (front + 1) % cap;
        sz--;
        return rem;
    }
};
int main()
{
    queue q(4);
    cout << q.dequeue() << endl
         << endl;
    q.enqueue(10);
    q.enqueue(20);
    // cout << q.getrear() << endl
    //      << endl;
    q.enqueue(30);
    q.enqueue(40);
    cout << q.full() << endl
         << endl;
    cout << q.dequeue() << endl
         << endl;
    // cout << q.getrear() << endl
    //      << endl;

    return 0;
}