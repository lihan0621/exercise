#include <iostream>

using namespace std;

//55-1.�����������
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

	/* ��ǰ�ڵ������������� */
	int lenLeft=maxDepth(root->left);
	/* ��ǰ�ڵ������������� */
	int lenRight=maxDepth(root->right);

	/* ����������ȵ�������������ȵĵĽϴ��߼� 1����ǰ�ڵ����ȣ�*/
	return lenLeft>lenRight?lenLeft+1:lenRight+1;
}