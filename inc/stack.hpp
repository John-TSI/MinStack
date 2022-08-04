#ifndef STACK_HPP
#define STACK_HPP

#include"node.hpp"

class MinStack
{
    StackNode* topNode;

    public:
        // --- ctor ---
        MinStack();

        // --- dtor ---
        ~MinStack();

        // --- methods ---
        void push(int);
        void pop();
        int top();
        int getMin();
};

#endif // STACK_HPP