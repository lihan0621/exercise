#include <iostream>

using namespace std;

//65.���üӼ��˳����ӷ�
//https://leetcode-cn.com/problems/bu-yong-jia-jian-cheng-chu-zuo-jia-fa-lcof/

class Solution {
public:
	int add(int a, int b) {
		while(b) {
			int carry=a&b; // ���� ��λ
			a=a^b; // ���� ��λ
			b=(unsigned)carry<<1;
		}
		return a;
	}
};

void test()
{
	Solution s;
	int res=s.add(1, 1);
	cout<<res<<endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}