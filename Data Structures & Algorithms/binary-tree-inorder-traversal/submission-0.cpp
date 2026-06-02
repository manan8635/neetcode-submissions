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
    vector <int> output ;
public:
   vector <int> inorderTraversal(TreeNode * rootNode){

            if(rootNode == NULL){
                return {} ;
            }
         
         inorderTraversal(rootNode ->left) ;
         output.push_back(rootNode -> val) ;
         inorderTraversal(rootNode ->right) ;
         

         return output ;
    }
};