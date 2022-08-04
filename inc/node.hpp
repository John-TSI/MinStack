#ifndef NODE_HPP
#define NODE_HPP

#include<climits>

struct StackNode
{
    int val, stackMin;
    StackNode* next;

    StackNode();
    StackNode(int, StackNode*);
  };

#endif // NODE_HPP