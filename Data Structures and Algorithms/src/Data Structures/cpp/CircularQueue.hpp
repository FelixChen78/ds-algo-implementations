//
//  CircularQueue.hpp
//  Data Structures and Algorithms
//
//  Created by Felix  Chen on 3/11/21.
//  Copyright © 2021 Felix  Chen. All rights reserved.
//

#ifndef CircularQueue_hpp
#define CircularQueue_hpp

#include <stdio.h>

#define SIZE 5



class CircularQueue {
    private:
    int queue[SIZE], head, tail, length;
    public:
    
    CircularQueue() {
        head = 0;
        tail = 0;
        length = 0;
    }

    bool isFull();
    bool isEmpty();
    void enQueue(int x);
    int deQueue();
    
    

    


};
#endif /* CircularQueue_hpp */
