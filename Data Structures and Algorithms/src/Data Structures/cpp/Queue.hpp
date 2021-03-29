//
//  Queue.hpp
//  Data Structures and Algorithms
//
//  Created by Felix  Chen on 3/11/21.
//  Copyright © 2021 Felix  Chen. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>

#define SIZE 5



class Queue {
    private:
    int queue[SIZE], head, tail, length;
    public:
    
    Queue() {
        head = 0;
        tail = 0;
        length = 0;
    }

    bool isFull();
    bool isEmpty();
    void enQueue(int x);
    int deQueue();
    
    

    


};
#endif /* Queue_hpp */
