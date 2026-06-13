#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int x = 0) {
        data = x;
        next = NULL;
    }
};

class QueueList {
public:
    Node *front;
    Node *rear;
    int size;

    QueueList() {
        front = NULL;
        rear = NULL;
        size = 0;
    }

    void enqueue(int x) {        
        Node *temp = new Node(x);
        if (front == NULL) {
            front = rear = temp;
            size++;                 
            return;
        }
        rear->next = temp;
        rear = temp;
        size++;
    }

    void dequeue() {               
        if (front == NULL) {
            return;
        }
        Node *temp = front;
        front = front->next;
        if (front == NULL) {
            rear = NULL;
        }
        size--;                   
        delete temp;
    }
};

int main() {
    QueueList Qu;
    Qu.enqueue(10);
    Qu.enqueue(20);
    Qu.enqueue(30);
    Qu.enqueue(40);
    Qu.enqueue(50);
    return 0;
}
