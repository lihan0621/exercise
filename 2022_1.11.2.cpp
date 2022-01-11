#include <iostream>

//32-2.从上到下打印二叉树2
//https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-ii-lcof/
using namespace std;

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};

#define MAXSIZE 10000

int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
	if(root==NULL) {
		*returnSize=0;
		return NULL;
	}
	struct TreeNode*queue[MAXSIZE]={ 0 };
	int head=0, tail=0;
	int **res=(int**)malloc(sizeof(int*)*MAXSIZE);
	*returnColumnSizes=(int*)malloc(sizeof(int*)*MAXSIZE);
	queue[tail++]=root;//push
	*returnSize=0;
	while(head<tail) {
		int size=(tail-head+MAXSIZE)%MAXSIZE;
		(*returnColumnSizes)[*returnSize]=size;
		res[*returnSize]=(int*)malloc(sizeof(int)*size);
		for(int i=0; i<size; i++) {
			struct TreeNode* temp=queue[head++];//pop
			res[*returnSize][i]=temp->val;
			if(temp->left) {
				queue[tail++]=temp->left;
			}
			if(temp->right) {
				queue[tail++]=temp->right;
			}
		}
		(*returnSize)++;
	}
	return res;
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