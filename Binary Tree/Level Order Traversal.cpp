#include <iostream>
#include<queue>
using namespace std;

class node
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
    
    if(data==-1)
    return NULL;
        
    cout<<"At left of ("<<root->data<<") ";
    root->left = buildTree(root->left);
    cout<<"At right of ("<<root->data<<") ";
    root->right = buildTree(root->right);
    
    return root;
}
void levelOrderTraversal(node* root)
{
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
    
    root = buildTree(root);
    
    levelOrderTraversal(root);
    
    return 0;
}
