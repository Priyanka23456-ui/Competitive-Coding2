\# Largest Rectangle in Histogram



\## Problem Name



Largest Rectangle in Histogram



\## Intuition



The initial idea is to consider each bar as the height of a possible rectangle and find how far that height can extend to the left and right.



\## Approach



1\. Consider each bar one by one.

2\. For the current bar, expand toward the left while the bars are at least as tall.

3\. Expand toward the right using the same condition.

4\. Calculate the rectangle area using the current height and its width.

5\. Keep track of the maximum area.



\## Complexity



\- Time Complexity: O(n²)

\- Space Complexity: O(1)



\## Code



The complete Brute Force solution is available in `brute\_force.cpp`.

