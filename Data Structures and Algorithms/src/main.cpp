//
//  main.cpp
//  Data Structures and Algorithms
//
//  Created by Felix  Chen on 3/11/21.
//  Copyright © 2021 Felix  Chen. All rights reserved.
//

#include <iostream>
#include "Data Structures/Stack.hpp"
#include "Data Structures/Queue.hpp"
#include "Data Structures/CircularQueue.hpp"

void runStackExample()
{
    class Stack st;
    std::cout << "pushing 10 numbers into stack: \n";
    for (int i = 1; i <= MAX; i++) {
        st.push(i * 10);
    }
    std::cout << "poping 10 numbers out of stack \n";
    for (int i = 0; i < MAX; i++) {
        st.pop();
    }

}

void runQueueExample()
{
    class Queue q;
    
    for (int i = 1; i <= SIZE + 1; i++) {
        q.enQueue(i * 10);
    }
    for (int i = 0; i < SIZE; i++) {
        q.deQueue();
    }
    
}


void runCircularQueueExample()
{
    class CircularQueue cq;

    for (int i = 1; i <= SIZE + 1; i++) {
        cq.enQueue(i * 10);
    }
    for (int i = 0; i < SIZE; i++) {
        cq.deQueue();
    }
}

int main(int argc, const char * argv[]) {
//    runStackExample();
//    runQueueExample();
    runCircularQueueExample();
    return 0;
}
