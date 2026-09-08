\# Implement Queue using Stacks



\## Problem Name



Implement Queue using Stacks



\## Intuition



A queue follows the FIFO (First In, First Out) principle, while a stack follows LIFO (Last In, First Out). The initial idea is to use stacks to simulate the behavior of a queue.



\## Approach



1\. Use stacks to store the queue elements.

2\. For the push operation, insert the new element into the stack.

3\. For pop and peek operations, rearrange the elements so that the oldest element is accessible.

4\. Maintain the required FIFO order using the stack operations.



\## Complexity



\- Time Complexity: O(n)

\- Space Complexity: O(n)



\## Code



The complete Brute Force solution is available in `brute\_force.cpp`.



