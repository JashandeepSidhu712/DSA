# RIGHT VIEW OF THE BINARY TREE

The "right view" of a binary tree means to look at the tree from the right side and report the nodes that are visible when looking from that perspective.

To obtain the right view of a binary tree using a recursive approach in C++, we can perform a depth-first search (DFS) traversal on the tree, while keeping track of the level of each node we encounter. At each level, we will update the node that is visible from the right side.

```
    void solve(Node *root, vector<int> &v, int level)
    {
        if(root==NULL)
        return ;
        
        if(level==v.size())
        v.push_back(root->data);
        
        solve(root->right, v, level+1);
        solve(root->left, v, level+1);
        
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> v;
       solve(root, v, 0);
       
       return v;
    }
```

## EXPLANATION

## TIME COMPLEXITY

## SPACE COMPLEXITY

## LINK TO QUESTION
