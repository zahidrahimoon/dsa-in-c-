#include <iostream>
using namespace std;

class Queue {
    int front, rear, size;
    int capacity;
    int* array;

public:
    Queue(int capacity) {
        this->capacity = capacity;
        front = 0;
        rear = -1;
        size = 0;
        array = new int[capacity];
    }

    bool isFull() {
        return size == capacity;
    }

    bool isEmpty() {
        return size == 0;
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }
        rear++;
        array[rear] = item;
        size++;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        int item = array[front];
        front++;
        size--;
        return item;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        for (int i = front; i <= rear; i++)
            cout << array[i] << " ";
        cout << endl;
    }
};

int main() {
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    cout << "Dequeued: " << q.dequeue() << endl;
    q.display();
    return 0;
}
