#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack {
private:
    Node* head;

public:
    Stack() {
        head = nullptr;
    }

    void push(int data) {
        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
    }

    int pop() {
        if (head == nullptr) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int popped = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        return popped;
    }

    void display() {
        Node* current = head;
        if (current == nullptr) {
            cout << "Stack is empty" << endl;
            return;
        }
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

// Example usage
int main() {
    Stack stack;
    stack.push(3);
    stack.push(5);
    stack.push(7);
    stack.display(); // Output: 7 5 3
    stack.pop();
    stack.display(); // Output: 5 3

}
