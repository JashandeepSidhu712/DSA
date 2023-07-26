# CREATION OF BINARY TREE

The program defines a **class called node**, which represents a node in a binary tree. A binary tree node typically contains a **data element**, a **pointer to the left child node**, and a **pointer to the right child node**.

The node class has three members: <br>
1. int data: It stores the integer value of the node.
2. node* left: It is a pointer that points to the left child node.
3. node* right: It is a pointer that points to the right child node.
   
The node class also has a **constructor** node(int info) which takes an integer parameter and initializes the data member with the provided value. The **left and right pointers are set to NULL initially, indicating that the node has no left or right child**.

The buildTree function is used to construct a binary tree. It takes a node* pointer as input, representing the root of the tree. The user is prompted to enter data for the current node using cin>>data.

If the user enters -1, it signifies the end of the branch, and thus, the function returns NULL to indicate that there are no more child nodes.

If the user enters any other value, a **new node is dynamically created on the heap using the new keyword**, and the data member of this new node is set to the provided data. The **root pointer is then made to point to this newly created node**, effectively setting it as the root of the binary tree.

The function then recursively calls itself twice to construct the left and right subtrees. The root->left and root->right pointers are updated with the results of these recursive calls.

After constructing the entire binary tree, the **root pointer is returned**, pointing to the root of the tree.

In the main function, a **node(*) pointer named root is initialized to NULL, indicating an empty binary tree**.
