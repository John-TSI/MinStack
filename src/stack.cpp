#include"../inc/stack.hpp"


// --- ctor ---
MinStack::MinStack() : topNode(nullptr) {}

// --- dtor ---
MinStack::~MinStack()
{
    while(topNode)
    {
        StackNode* tmp{topNode};
        topNode = topNode->next;
        delete tmp;
    }
}


// --- methods ---
void MinStack::push(int input){ topNode = new StackNode(input, topNode); }

void MinStack::pop()
{
    StackNode* tmp{topNode};
    topNode = topNode->next;
    delete tmp;
}

int MinStack::top(){ return topNode->val; }

int MinStack::getMin(){ return topNode->stackMin; }