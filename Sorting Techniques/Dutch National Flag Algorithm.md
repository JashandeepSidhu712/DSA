# DUTCH NATIONAL FLAG ALGORITHM

The Dutch National Flag algorithm (DNF algorithm) is a sorting algorithm that efficiently **sorts an array with three distinct values**, often represented by 0's, 1's, and 2's (hence the name "Dutch National Flag"). It was developed by Edsger W. Dijkstra, a Dutch computer scientist.

## BRUTE FORCE APPROACH TO SORT THE ARRAY OF 0's, 1's and 2's

## DNF ALGORITHM APPROACH

### INTUITION
The intuition behind the DNF algorithm comes from the observation that <br>
if we **partition** the array **into three regions** while iterating through it,<br>
we can ensure that all the **0's are grouped together at the beginning**, <br>
all the **1's are in the middle**, <br>
and all the **2's are at the end**. 

The algorithm uses **three pointers**: <br>
low, mid, and high to track the boundaries of these regions:
1. **low**: Represents the boundary between 0's and 1's.
2. **mid**: Represents the current element being processed.
3. **high**: Represents the boundary between 1's and 2's.

### DIAGRAM 

(0000000)(111111111111)(1|0|2 unsorted)(22222222222) <br>
0 low-1 | low  mid-1 |  mid       high | high+1  n-1 

### APPROACH
1. If the current element is 0, it swaps the element with the element at the `low` pointer (which is the first occurrence of 1) and moves both `low` and `mid` pointers to the right. This ensures that all 0's are moved to the left of the `low` pointer.

2. If the current element is 1, it means it's in the correct place, and the algorithm just moves the `mid` pointer to the right.

3. If the current element is 2, it swaps the element with the element at the `high` pointer (which is the first occurrence of 2 from the right) and decrements the `high` pointer. This ensures that all 2's are moved to the right of the `high` pointer.

By doing this, the algorithm efficiently partitions the array into three regions while sorting it in a single pass, making it very efficient with a time complexity of O(n) where n is the size of the array.

The DNF algorithm is a great example of a two-pointer approach used to solve specific problems efficiently. It's a classic algorithmic technique and can be extended to partition arrays with more than three distinct values as well.
