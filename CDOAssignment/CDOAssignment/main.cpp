#include <iostream>

const int MAX_SIZE = 100;

class Stack {
private:
    int arr[MAX_SIZE];
    int top; // 스택의 가장 위에 있는 원소의 인덱스

public:
    Stack() {
        top = -1; // 스택이 비어있는 상태를 나타내기 위해 -1로 초기화
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(int data) {
        if (isFull()) {
            std::cout << "Stack is full. Cannot push element." << std::endl;
            return;
        }

        arr[++top] = data;
        std::cout << "Pushed element: " << data << std::endl;
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot pop element." << std::endl;
            return;
        }

        int poppedElement = arr[top--];
        std::cout << "Popped element: " << poppedElement << std::endl;
    }

    void printStack() {
        if (isEmpty()) {
            std::cout << "Stack is empty." << std::endl;
            return;
        }

        std::cout << "Stack elements: ";
        for (int i = top; i >= 0; --i) { // 가장 위에서부터 출력
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.printStack(); // 출력: 30 20 10

    stack.pop();

    stack.printStack(); // 출력: 20 10

    return 0;
}
