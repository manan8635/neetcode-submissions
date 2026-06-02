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
   vector <int> preorderTraversal(TreeNode * rootNode){

            if(rootNode == NULL){
                return {} ;
            }
         output.push_back(rootNode -> val) ;
         preorderTraversal(rootNode ->left) ;
         preorderTraversal(rootNode ->right) ;

         return output ;
    }
};
