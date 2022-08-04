// https://leetcode.com/problems/min-stack/

#include<iostream>
#include"../inc/stack.hpp"

int main()
{
	MinStack* ms = new MinStack();

	ms->push(2);
	ms->push(4);
	ms->push(6);
	std::cout << ms->getMin() << '\n';  // 2
	std::cout << ms->top() << '\n';  // 6
	ms->pop();
	std::cout << ms->top() << '\n';  // 4

	delete ms;  // delete operator calls ~MinStack() before memory deallocation
	return 0;
}

