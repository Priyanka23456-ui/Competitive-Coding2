\# Product of Array Except Self



\## Problem Name



Product of Array Except Self



\## Intuition



The initial idea is to calculate the product of all elements except the current element for every position in the array.



\## Approach



1\. For each index, consider it as the current element.

2\. Traverse the complete array.

3\. Skip the current index.

4\. Multiply all the remaining elements.

5\. Store the resulting product in the answer array.

6\. Repeat for every index.



\## Complexity



\- Time Complexity: O(n²)

\- Space Complexity: O(n)



\## Code



The complete Brute Force solution is available in `brute\_force.cpp`.



