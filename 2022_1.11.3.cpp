#include <iostream>

using namespace std;


//32.3从上到下打印二叉树3
//https://leetcode-cn.com/problems/cong-shang-dao-xia-da-yin-er-cha-shu-iii-lcof/
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
};


void reverse(int *nums, int n) {
	int left=0, right=n-1;
	while(left<right) {
		int temp=nums[left];
		nums[left]=nums[right];
		nums[right]=temp;
		left++;
		right--;
	}
}

int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
	if(!root) {
		*returnSize=0;
		return NULL;
	}
	int **res=(int**)malloc(sizeof(int*)*1001);
	*returnSize=0;
	*returnColumnSizes=(int*)malloc(sizeof(int)*1001);
	struct TreeNode* queue[1100];
	memset(queue, 0, 1100*sizeof(struct TreeNode*));
	memset(*returnColumnSizes, 0, 1001*sizeof(int));
	int front=0, rear=0;
	struct TreeNode* last=root;
	queue[rear++]=root;
	int k=0;
	while(front!=rear) {
		int size=rear-front;
		int *temp=(int*)malloc(sizeof(int)*size);
		for(int i=0; i<size; i++) {
			struct TreeNode* node=queue[front++];
			temp[returnColumnSizes[0][*returnSize]++]=node->val;
			if(node->left)queue[rear++]=node->left;
			if(node->right)queue[rear++]=node->right;
		}
		if(k%2) {
			reverse(temp, size);
		}
		res[(*returnSize)++]=temp;
		k++;
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