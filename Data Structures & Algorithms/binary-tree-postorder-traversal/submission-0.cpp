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
   vector <int> postorderTraversal(TreeNode * rootNode){

            if(rootNode == NULL){
                return {} ;
            }
         
         postorderTraversal(rootNode ->left) ;
         postorderTraversal(rootNode ->right) ;
         output.push_back(rootNode -> val) ;

         return output ;
    }
};