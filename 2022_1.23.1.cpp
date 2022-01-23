#include <iostream>

using namespace std;

//55-1.二叉树的深度
//https://leetcode-cn.com/problems/er-cha-shu-de-shen-du-lcof/

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

int maxDepth(struct TreeNode* root) {
	if(root==NULL) {
		return 0;
	}

	/* 当前节点的左子树的深度 */
	int lenLeft=maxDepth(root->left);
	/* 当前节点的右子树的深度 */
	int lenRight=maxDepth(root->right);

	/* 二叉树的深度等于左右子树深度的的较大者加 1（当前节点的深度）*/
	return lenLeft>lenRight?lenLeft+1:lenRight+1;
}