#include"../inc/node.hpp"
#include<algorithm>


// --- ctors ---
StackNode::StackNode() : val(INT_MIN), stackMin(INT_MIN), next(nullptr) {}
StackNode::StackNode(int input, StackNode* next) : val(input), next(next)
{
    stackMin = next ? std::min(val, next->stackMin) : val;
}