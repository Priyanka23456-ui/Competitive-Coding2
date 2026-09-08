\# Remove Nth Node From End of List



\## Problem Name



Remove Nth Node From End of List



\## Intuition



The first idea is to traverse the linked list and determine its length. Then we can identify the node that needs to be removed from the beginning of the list.



\## Approach



1\. Traverse the linked list and calculate its length.

2\. Find the position of the node to remove from the beginning.

3\. Traverse to the node just before the target node.

4\. Update its `next` pointer to skip the target node.

5\. Return the modified linked list.



\## Complexity



\- Time Complexity: O(n)

\- Space Complexity: O(1)



\## Code



The complete Brute Force solution is available in `brute\_force.cpp`.

