#include <iostream>
#include <stdexcept>

class TwoStacks {
private:
    int size;
    int* arr;
    int top1;
    int top2;

public:
    TwoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    ~TwoStacks() {
        delete[] arr;
    }

    void push1(int value) {
        if (top1 < top2 - 1) {
            arr[++top1] = value;
        } else {
            throw std::overflow_error("Stack 1 overflow");
        }
    }

    void push2(int value) {
        if (top1 < top2 - 1) {
            arr[--top2] = value;
        } else {
            throw std::overflow_error("Stack 2 overflow");
        }
    }

    int pop1() {
        if (top1 >= 0) {
            return arr[top1--];
        } else {
            throw std::underflow_error("Stack 1 underflow");
        }
    }

    int pop2() {
        if (top2 < size) {
            return arr[top2++];
        } else {
            throw std::underflow_error("Stack 2 underflow");
        }
    }
};

int main() {
    TwoStacks twoStacks(3);

    twoStacks.push1(1);
    twoStacks.push1(2);
    twoStacks.push2(3);
    twoStacks.push2(4);
    twoStacks.push2(5);

    std::cout << "Popped from stack 1: " << twoStacks.pop1() << std::endl;
    std::cout << "Popped from stack 2: " << twoStacks.pop2() << std::endl;

    return 0;
}