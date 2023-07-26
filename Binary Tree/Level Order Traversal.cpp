#include <iostream>
#include<queue>
using namespace std;

class node //The node class represents a node in the binary tree, with integer data, and pointers to its left and right children.
{
    public:
    int data;
    node* left;
    node* right;
    
    node(int info)
    {
        this->data = info;
        this->left = NULL;
        this->right = NULL;
    }
};
node* buildTree(node* root)
{
    int data;
    cout<<"Enter data to be inserted = ";
    cin>>data;
    root=new node(data); //dynamically allocates memory for a new Node object on the heap, initializes it with the provided data, and makes root point to this newly created node, effectively setting the root of the binary tree.

    //Base Condition
    if(data==-1) //The function continues to build the left and right subtrees for each node until the user enters -1, indicating a NULL node.
    return NULL;
        
    cout<<"At left of ("<<root->data<<") ";
    root->left = buildTree(root->left);
    cout<<"At right of ("<<root->data<<") ";
    root->right = buildTree(root->right);
    
    return root;
}
void levelOrderTraversal(node* root)
{
    //It uses a queue to visit each node in a breadth-first manner, printing the data of each node as it is visited.
    queue<node*> q;
    q.push(root);
    
    while(!q.empty())
    {
        node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);
    }
}

int main()
{
    node* root = NULL; //initializes a pointer named root to NULL, meaning it does not currently point to any memory location. In other words, the pointer root is not currently pointing to a valid node in memory, indicating an empty binary tree.
    
    root = buildTree(root); //The buildTree function is called to construct the binary tree, starting from the root.
    
    levelOrderTraversal(root); //The levelOrderTraversal function is called to print the data of all nodes in the binary tree in level-order.
    
    return 0;
}

/*

TIME COMPLEXITY

buildTree Function:
The buildTree function is used to construct a binary tree. It recursively takes input from the user and creates nodes for the tree. The time complexity of this function can be analyzed as follows:
For each node in the binary tree, the function performs a constant amount of work (reading data from the user and creating a new node).
Let's assume there are 'n' nodes in the binary tree.
Since the function processes each node once, the time complexity can be approximated as O(n).

levelOrderTraversal Function:
The levelOrderTraversal function performs a level-order (breadth-first) traversal of the binary tree. It visits each node once and prints its data. The time complexity can be analyzed as follows:
In the worst case, all nodes in the binary tree need to be traversed.
Let's assume there are 'n' nodes in the binary tree.
The function visits each node once, and for each node, a constant amount of work is performed (printing the node's data and enqueueing its children in the queue).
Therefore, the time complexity of this function is O(n).

main Function:
In the main function, the buildTree function is called first, which takes O(n) time, where 'n' is the number of nodes in the binary tree.
Overall Time Complexity:
The time complexity of the entire program is dominated by the buildTree function, which is O(n). The levelOrderTraversal function, although also O(n), performs its operations after the binary tree is constructed.

In summary, the overall time complexity of the given code is O(n), where 'n' is the number of nodes in the binary tree.

*/
