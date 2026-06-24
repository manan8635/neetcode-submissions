/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root == nullptr) return {} ;

        queue <TreeNode*>q ;

        q.push(root) ;
        vector <vector <int> > result ;
        

        while(!q.empty()){

            // queue  me pde hue saare element ka count lelo - using q.size()
            int currentSize = q.size() ;
            vector <int> temp ;
            while(currentSize--){
                TreeNode * temporary = q.front() ; q.pop() ;
                temp.push_back(temporary->val) ;

                // ek bahut imp baat yaha miss ho gyi thi so got Runtime errors and got solved by gpt .. 
                // we shud not push null pointers and must only push i.e. not a nullptr
                // so .. 

              if(temporary -> left != nullptr)  q.push(temporary -> left) ;
              if(temporary -> right != nullptr)   q.push(temporary -> right) ;
            }
           result.push_back(temp) ;
        }
        return result ; 
    }
};
