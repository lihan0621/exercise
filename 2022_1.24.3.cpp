#include <iostream>

using namespace std;

//68-2.�������������������
//https://leetcode-cn.com/problems/er-cha-shu-de-zui-jin-gong-gong-zu-xian-lcof/

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
	TreeNode* ans;
	bool dfs(TreeNode* root, TreeNode* p, TreeNode* q) {
		if(root==nullptr) return false;
		bool lson=dfs(root->left, p, q);
		bool rson=dfs(root->right, p, q);
		if((lson&&rson)||((root->val==p->val||root->val==q->val)&&(lson||rson))) {
			ans=root;
		}
		return lson||rson||(root->val==p->val||root->val==q->val);
	}
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		dfs(root, p, q);
		return ans;
	}
};