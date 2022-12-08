#ifndef STACK_H
#define STACK_H

#include "EStackEmpty.h"

template<typename E>
class Stack {
private:
    struct Node {
        E value;
        Node *pNode;
    };

    Node *top = nullptr;
    int size = 0; //размер стека

public:
    void push(const E value) {
        Node *node = new Node{value, top};
        top = node;
        size++;
    }

    E pop() {
        if (top == nullptr) {
            throw EStackEmpty();
        }

        E value = top->value;
        top = top->pNode;
        size--;
        return value;
    }

    int getSize() {
        return size;
    }
};

#endif //STACK_H
