//
//  Stack.hpp
//  Data Structures and Algorithms
//
//  Created by Felix  Chen on 3/11/21.
//  Copyright © 2021 Felix  Chen. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>

#define MAX 10

/** STACK: A data structure that follows LIFO: last in first out.
 *      EX: Stacking plates
 *      USECASES: reversing order, converting expression to prefix from postfix, storing browser history.
 *      API: Push, Pop, IsEmpty, IsFull, Peek
 *      COMPLEXITY: Runs in O(1)
 *      LEETCODE: #
 */

class Stack {
    int top;

    public:
    int a[MAX];
    Stack();
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();

};


#endif /* Stack_hpp */
