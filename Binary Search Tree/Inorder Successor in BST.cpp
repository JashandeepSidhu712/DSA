Node* ans = NULL;
        
        while(root!=NULL)
        {
            if(root->data <= x->data)
            {
                root=root->right;
            }
            else
            {
                ans = root;
                root=root->left;
            }
        }
        
        return ans;
