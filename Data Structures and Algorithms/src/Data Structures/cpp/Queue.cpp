//
//  Queue.cpp
//  Data Structures and Algorithms
//
//  Created by Felix  Chen on 3/11/21.
//  Copyright © 2021 Felix  Chen. All rights reserved.
//

#include "Queue.hpp"
#include <iostream>


bool Queue::isFull()
{
    return (length == SIZE);
}

bool Queue::isEmpty()
{
    return (length == 0);
}

void Queue::enQueue(int x)
{
    if (isFull()) {
        std::cout << "queue is already full \n";
    }
    else {
        queue[tail] = x;
        length ++;
        if (tail == length) {
            tail = 1;
        }
        else {
            tail++;
        }
    }
    
}

int Queue::deQueue() {
    int x = queue[head];
    if (head == length) {
        head = 1;
    }
    else {
        head++;
    }
    std::cout << x << " removed from queue \n";
    return x;
}
