//
//  Stack.cpp
//  Data Structures and Algorithms
//
//  Created by Felix  Chen on 3/11/21.
//  Copyright © 2021 Felix  Chen. All rights reserved.
//

#include "Stack.hpp"
#include <iostream>



Stack::Stack()
{
    top = -1; // -1 to show false
}


bool Stack::push(int x)
{
    //run out of stacks
    if (isFull()) {
        std::cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x; // increment then assigns top: same as top += 1; a[top] = x;
        std::cout << x << " pushed into stack \n";
        return true;
    }
}

int Stack::pop()
{
    //nothing in stack
    if (isEmpty()) {
        std::cout << "Stack UnderFlow \n";
        return 0;
    }
    else {
        int x = a[top--]; // shows top then decrement
        std::cout << x << " popped from stack \n";
        return x;
    }
}

int Stack::peek()
{
    if (isEmpty()) {
        std::cout << "Stack is Empty \n";
        return 0;
    }
    else {
        int x = a[top];
        std::cout << x << " is top of stack \n";
        return x;
    }

};

bool Stack::isEmpty()
{
    return (top < 0);
}

bool Stack::isFull()
{
    return (top == MAX-1);
}







