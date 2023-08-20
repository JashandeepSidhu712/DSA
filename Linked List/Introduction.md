# LINKED LIST
A linked list is a **linear data structure** that consists of a **sequence of elements called nodes**, where each node contains both data and a reference (or pointer) to the next node in the sequence. 

The first node is called the head, and the last node typically points to NULL.

## DIFFERNCE ARRAYS AND LINKED LIST

![image](https://github.com/JashandeepSidhu712/DSA/assets/117754690/3f450ee3-a4dd-4d0d-8db7-74f26955aa6a)

## TYPES OF LINKED LIST

### SINGLY LINKED LIST:
A singly linked list is a type of linked list where each node points only to the next node in the list.

```
+------+    +------+
| Data | -> | Next | -> NULL
+------+    +------+
```

### DOUBLY LINKED LIST:
A doubly linked list is a type of linked list where each node points to both the next and the previous nodes in the list.

```
+------+    +-------+    +-------+
| Prev | <->| Data  | <->| Next  |
+------+    +-------+    +-------+
```

### CIRCULAR LINKED LIST:
A circular linked list is a type of linked list where the last node points back to the first node, forming a loop.

```
+------+    +------+
| Data | -> | Next | -> ...
+------+    +------+
   ^                  |
   |                  v
   +------------------+
````
