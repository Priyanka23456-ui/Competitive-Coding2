\# Palindrome Linked List



\## Problem Name



Palindrome Linked List



\## Intuition



The initial idea is to traverse the linked list and store all its values in an array. Then we can check whether the array reads the same from both directions.



\## Approach



1\. Traverse the linked list.

2\. Store each node's value in an array.

3\. Use two pointers: one from the beginning and one from the end.

4\. Compare the values at both pointers.

5\. If any pair is different, the linked list is not a palindrome.

6\. If all pairs match, the linked list is a palindrome.



\## Complexity



\- Time Complexity: O(n)

\- Space Complexity: O(n)



\## Code



The complete Brute Force solution is available in `brute\_force.cpp`.

