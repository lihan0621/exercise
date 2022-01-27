#include <iostream>

using namespace std;

//15.二进制中1的个数
//https://leetcode-cn.com/problems/er-jin-zhi-zhong-1de-ge-shu-lcof/

class Solution {
public:
	int hammingWeight(uint32_t n) {
		int ret=0;
		for(int i=0; i<32; i++) {
			if(n&(1<<i)) {
				ret++;
			}
		}
		return ret;
	}
};

void test1()
{
	Solution s;
	int res=s.hammingWeight(11);
	cout<<res<<endl;
}

int main1()
{
	test1();
	system("pause");
	return 0;
}