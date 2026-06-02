class Solution {
    
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
       
        if(p == NULL && q == NULL){
            return true ;
        }
        if(p == NULL  || q == NULL  ){
            return false ;
        }
        if(p->val != q->val){
            return false ;
        }
        bool lefthissa = isSameTree(p->left,q->left) ;
        bool righthissa = isSameTree(p->right,q->right);
        if(lefthissa && righthissa){
            return true ;
        }else{
            return false ;
        }
        
    }


    bool isSubtree(TreeNode* root , TreeNode* subRoot) {
    
         if(root == NULL){
                return 0  ;
            }

           if(root->val == subRoot->val && isSameTree(root,subRoot)){
             return true ;
           } 

          return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
           
            
    }
};
