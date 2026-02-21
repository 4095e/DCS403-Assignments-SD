#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int v) : data(v), next(nullptr) {}
};

void printList(Node* head) {
    cout << "List: ";
    for (Node* cur = head; cur; cur = cur->next) cout << cur->data << " ";
    cout << "\n";
}

Node* createFromArray(int arr[], int n) {
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int i = 0; i < n; i++) {
        Node* node = new Node(arr[i]);
        if (!head) head = tail = node;
        else {
            tail->next = node;
            tail = node;
        }
    }
    return head;
}

int search(Node* head, int x) {
    int pos = 1;
    for (Node* cur = head; cur; cur = cur->next, pos++)
        if (cur->data == x) return pos;
    return -1;
}

Node* insertEnd(Node* head, int x) {
    Node* node = new Node(x);
    if (!head) return node;

    Node* cur = head;
    while (cur->next) cur = cur->next;
    cur->next = node;
    return head;
}

Node* insertBeginning(Node* head, int x) {
    Node* node = new Node(x);
    node->next = head;
    return node;
}

Node* deleteByValue(Node* head, int x) {
    if (!head) return nullptr;

    if (head->data == x) {
        Node* tmp = head->next;
        delete head;
        return tmp;
    }

    Node* prev = head;
    Node* cur = head->next;
    while (cur) {
        if (cur->data == x) {
            prev->next = cur->next;
            delete cur;
            return head;
        }
        prev = cur;
        cur = cur->next;
    }
    return head; // not found
}

Node* deleteAtPosition(Node* head, int pos) { // 1-based
    if (!head || pos <= 0) return head;

    if (pos == 1) {
        Node* tmp = head->next;
        delete head;
        return tmp;
    }

    Node* prev = head;
    for (int i = 1; i < pos - 1 && prev; i++) prev = prev->next;
    if (!prev || !prev->next) return head; // out of range

    Node* toDel = prev->next;
    prev->next = toDel->next;
    delete toDel;
    return head;
}

Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* cur = head;
    while (cur) {
        Node* nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    return prev;
}

Node* insertAfterValue(Node* head, int x, int y) {
    for (Node* cur = head; cur; cur = cur->next) {
        if (cur->data == x) {
            Node* node = new Node(y);
            node->next = cur->next;
            cur->next = node;
            break;
        }
    }
    return head;
}

void printReverseRec(Node* head) {
    if (!head) return;
    printReverseRec(head->next);
    cout << head->data << " ";
}

int countNodes(Node* head) {
    int c = 0;
    for (Node* cur = head; cur; cur = cur->next) c++;
    return c;
}

void freeList(Node* head) {
    while (head) {
        Node* tmp = head->next;
        delete head;
        head = tmp;
    }
}

int main() {
    cout << "=== Singly Linked List Demo ===\n";

    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]);

    // 1) Create + traverse
    Node* head = createFromArray(arr, n);
    printList(head);

    // 2) Search
    int pos = search(head, 30);
    if (pos == -1) cout << "30 not present\n";
    else cout << "Found 30 at position " << pos << "\n";

    // 3) Insert at end
    head = insertEnd(head, 50);
    printList(head);

    // 4) Insert at beginning
    head = insertBeginning(head, 5);
    printList(head);

    // 5) Delete by value
    head = deleteByValue(head, 20);
    printList(head);

    // 6) Delete at given position
    head = deleteAtPosition(head, 3);
    printList(head);

    // 9) Insert after a given value
    head = insertAfterValue(head, 30, 35);
    printList(head);

    // 8) Count nodes
    cout << "Count: " << countNodes(head) << "\n";

    // 10) Print reverse without modifying
    cout << "Reverse print (recursion): ";
    printReverseRec(head);
    cout << "\n";

    // 7) Reverse list
    head = reverseList(head);
    cout << "Reversed list: ";
    printList(head);

    freeList(head);
    return 0;
}
