//
//  CircularQueue.cpp
//  Data Structures and Algorithms
//
//  Created by Felix  Chen on 3/11/21.
//  Copyright © 2021 Felix  Chen. All rights reserved.
//

#include "CircularQueue.hpp"
#include <iostream>


bool CircularQueue::isFull()
{
    return (length == SIZE);
}

bool CircularQueue::isEmpty()
{
    return (length == 0);
}

void CircularQueue::enQueue(int x)
{
    if (isFull()) {
        std::cout << "Queue is full \n";
    }
    else {
        queue[tail] = x;
        std::cout << x << " has been added to queue \n";
        length ++;
        if (tail == length) {
            tail = 1;
        }
        else {
            tail++;
        }
        
    }
}

int CircularQueue::deQueue() {
    if (isEmpty()) {
        std::cout << "Queue is already empty \n";
        return -1;
    }
    else {
        int x = queue[head];
//        length --;
        if (head == length) {
            head = 1;
        }
        else {
            head++;
        }
        std::cout << x << " removed from queue \n";
        return x;
    }

}
