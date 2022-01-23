#include <iostream>

using namespace std;

//55-2.Æ½ºâ¶þ²æÊ÷
//https://leetcode-cn.com/problems/ping-heng-er-cha-shu-lcof/

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
	int height(TreeNode* root) {
		if(root==NULL) {
			return 0;
		}
		else {
			return max(height(root->left), height(root->right))+1;
		}
	}

	bool isBalanced(TreeNode* root) {
		if(root==NULL) {
			return true;
		}
		else {
			return abs(height(root->left)-height(root->right))<=1&&isBalanced(root->left)&&isBalanced(root->right);
		}
	}
};