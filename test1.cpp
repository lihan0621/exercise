#include <iostream>
#include <assert.h>
#include <vector>
#include <stack>
#include <list>

using namespace std;


//06.从尾到头打印链表
//https://leetcode-cn.com/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof/
#if 0

#define Elemtype int
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
typedef ListNode* List;

//方法一：使用vector的insert函数（向指定迭代器的前面位置插入数据）
class Solution {
public:
	vector<int> reversePrint(ListNode* head) {
		vector<int> arr;
		ListNode* pre=head;
		while(pre)
		{
			arr.insert(arr.begin(), pre->val);
			pre=pre->next;
		}
		for(int i=0; i<arr.size(); ++i)
			cout<<arr[i]<<" ";
		cout<<endl;
		return arr;
	}
};
//方法二：使用递归的方法
class Solution {
public:
	void method(vector<int>& res, ListNode* head) {
		if(head==NULL) return;
		method(res, head->next);
		res.push_back(head->val);
	}
	vector<int> reversePrint(ListNode* head) {
		vector<int> res;
		method(res, head);
		return res;

	}
//方法三：使用栈的数据结构
	vector<int> reversePrint(ListNode* head) {
		stack<int> s;
		vector<int> res;
		ListNode* pre=head;
		while(pre) {
			s.push(pre->val);
			pre=pre->next;
		}
		while(!s.empty()) {
			res.push_back(s.top());
			s.pop();
		}
		return res;
	}
};
void ListInit(List* plist)
{
	*plist=NULL;
}
ListNode* _creatNode(Elemtype v)
{
	ListNode* p=(ListNode*)malloc(sizeof(ListNode));
	assert(p!=NULL);
	p->val=v;
	p->next=NULL;

	return p;
}

void ListPushBack(List* plist, Elemtype v)
{
	//申请节点
	ListNode* s=_creatNode(v);
	ListNode* p=*plist;

	//插入节点
	if(p==NULL)  //向头结点插入
	{
		*plist=s;
		return;
	}

	while(p->next!=NULL)
		p=p->next;
	p->next=s;
}

void test()
{
	List lst;
	ListInit(&lst);
	ListPushBack(&lst, 1);
	ListPushBack(&lst, 2);
	ListPushBack(&lst, 3);
	ListPushBack(&lst, 4);
	ListNode* head=lst;
	Solution S;
	S.reversePrint(head);
}

void test()
{
	vector<int> arr;
	arr.insert(arr.begin(), 1);
	arr.insert(arr.begin(), 2);
	arr.insert(arr.begin(), 3);
	arr.insert(arr.begin(), 4);
	for(int i=0; i<arr.size(); i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
#endif

void test()
{

}

int main1()
{
	test();
	system("pause");
	return 0;
}