//24.��ת����
//https://leetcode-cn.com/problems/fan-zhuan-lian-biao-lcof/
#include <iostream>
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
	
};
//ʹ��˫ָ��ķ�����ת����
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode* prev=nullptr;
		ListNode* curr=head;
		while(curr) {
			ListNode* next=curr->next;
			curr->next=prev;
			prev=curr;
			curr=next;
		}
		return prev;
	}
};
int main2()
{
	system("pause");
	return 0;
}
