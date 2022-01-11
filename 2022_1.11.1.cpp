#include <iostream>
#include <vector>
#include <assert.h>


//32-1.从上到下打印二叉树1
//https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-lcof/
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;

};
int* levelOrder(struct TreeNode* root, int* returnSize) {
	struct TreeNode* Queue[1100];
	int fornt=-1, rear=-1;
	int i=0;
	struct TreeNode *p;
	int* arr=(int *)malloc(sizeof(int)*1100);
	assert(arr);
	if(root==NULL) {
		(*returnSize)=0;
		return NULL;
	}
	Queue[++rear]=root;
	while(fornt<rear) {
		p=Queue[++fornt];
		arr[i++]=p->val;
		if(p->left)
		{
			Queue[++rear]=p->left;
		}
		if(p->right)
		{
			Queue[++rear]=p->right;
		}
	}
	*returnSize=i;
	return arr;
}

void test()
{

}

int main()
{
	test();
	system("pause");
	return 0;
}