if(root == NULL){
            return 0;
        }
        
        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = height(root->left) + 1 + height(root->right);
        int ans = max(op1,max(op2,op3));
        return ans;
        }
