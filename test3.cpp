//83.ɾ�����������е��ظ�Ԫ��
//https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list/
#include <iostream>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head) {
	if(head==NULL)
		return NULL;
	struct ListNode* cur=head;
	while(cur->next)
	{
		if(cur->val==cur->next->val)
			cur->next=cur->next->next;
		else
			cur=cur->next;
	}
	return head;
}



