#include <iostream>
using namespace std;

class CircularQueue {
    static const int SIZE = 5;
    int arr[SIZE];
    int front, rear;

public:
    CircularQueue() : front(-1), rear(-1) {}

    bool isEmpty() const { return front == -1; }
    bool isFull() const { return !isEmpty() && ((rear + 1) % SIZE == front); }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Enqueue failed: Queue is full\n";
            return;
        }
        if (isEmpty()) front = rear = 0;
        else rear = (rear + 1) % SIZE;

        arr[rear] = x;
        cout << "Enqueued " << x << "\n";
        display();
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Dequeue failed: Queue is empty\n";
            return;
        }
        int removed = arr[front];

        if (front == rear) front = rear = -1;
        else front = (front + 1) % SIZE;

        cout << "Dequeued " << removed << "\n";
        display();
    }

    void peek() const {
        if (isEmpty()) cout << "Peek failed: Queue is empty\n";
        else cout << "Front element: " << arr[front] << "\n";
    }

    void display() const {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue (front->rear): ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << "\n";
    }
};

int main() {
    cout << "=== Circular Queue Demo ===\n";
    CircularQueue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7); // should fail (full)
    q.peek();

    return 0;
}
