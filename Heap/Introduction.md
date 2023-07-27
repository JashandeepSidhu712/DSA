# HEAP

## COMPLETE BINARY TREE

A complete binary tree is a special type of binary tree where **all levels of the tree are completely filled, except possibly the last level**, and the nodes in the last level are as left as possible. In other words, if the last level is not completely filled, the nodes in that **level are filled from left to right**.

## HEAP DATA STRUCTURE
A heap is a specialized **complete binary tree-based data structure that satisfies the heap order property**. 

It is commonly used to **implement priority queues** and efficiently find the maximum or minimum element in a collection.

## HEAP ORDER PROPERTY

### Max Heap:
In a max heap, the **value of each node is greater than or equal to the values of its children**, satisfying the max heap property. This means that the **maximum element is always stored at the root** of the heap.

### Min Heap:
In a min heap, the **value of each node is less than or equal to the values of its children**, satisfying the min heap property. This means that the **minimum element is always stored at the root** of the heap.

## ARRAY REPRESENTATION
The heap can be efficiently represented using an array instead of a traditional linked data structure. In a heap, the **elements are stored in an array** where the **relationship between parent and child nodes can be determined** using simple mathematical formulas **based on the index of each node**.

For a node at index i (where the indices start from 0), the relationships with its children can be calculated as follows: <br>
**Left Child Index:** <br>
The left child of the node at index i can be found at index (2 * i) + 1. <br>
**Right Child Index:** <br>
The right child of the node at index i can be found at index (2 * i) + 2. <br>
**Parent Index:** <br>
 The parent of the node at index i (except for the root node) can be found at index (i - 1) / 2.

## EFFICIENCY 
Heaps allow efficient access to the maximum (in a max heap) or minimum (in a min heap) element in constant time (O(1)), as the root of the heap always holds the desired element. 




