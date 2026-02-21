#include <iostream>
using namespace std;

class LinearQueue {
    static const int SIZE = 5;
    int arr[SIZE];
    int front, rear;

public:
    LinearQueue() : front(-1), rear(-1) {}

    bool isEmpty() const { return front == -1; }
    bool isFull()  const { return rear == SIZE - 1; }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Enqueue failed: Queue is full\n";
            return;
        }
        if (isEmpty()) front = 0;
        arr[++rear] = x;
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
        else front++;
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
        for (int i = front; i <= rear; i++) cout << arr[i] << " ";
        cout << "\n";
    }
};

int main() {
    cout << "=== Linear Queue Demo ===\n";
    LinearQueue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.peek();
    q.dequeue();
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); // should fail (full)
    q.display();

    return 0;
}
