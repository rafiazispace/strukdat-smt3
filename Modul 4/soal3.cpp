#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
    Node* tail;

public:
    LinkedList() : head(nullptr), tail(nullptr) {}

    ~LinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void insertLast(int nilai) {
        Node* baru = new Node{nilai, nullptr};
        if (head == nullptr) {
            head = tail = baru;
        } else {
            tail->next = baru;
            tail = baru;
        }
    }

    long long sum() const {
        long long total = 0;
        Node* cur = head;
        while (cur != nullptr) {
            total += cur->data;
            cur = cur->next;
        }
        return total;
    }
};

int main() {
    LinkedList list;
    int n, nilai;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nilai;
        list.insertLast(nilai);
    }
    cout << list.sum() << endl;
    return 0;
}