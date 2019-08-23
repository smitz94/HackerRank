    int height(Node* root) {
        // Write your code here.

        if(root==NULL)
            return 0;
        
        queue<Node* > q;
        q.push(root);

        int h=-1;
        int nodecount;

        Node* temp;

        while(1)
        {   
            nodecount=q.size();
            if(nodecount==0)
                return h;
            
            h++;
            
            while(nodecount>0)
            {
                temp=q.front();
                q.pop();

                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                
                nodecount--;

            }
        }
    }

