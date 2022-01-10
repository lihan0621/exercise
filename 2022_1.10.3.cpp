#include <iostream>
#include <vector>
#include <string>

//50.第一个只出现一次的字符
//https://leetcode-cn.com/problems/di-yi-ge-zhi-chu-xian-yi-ci-de-zi-fu-lcof/
using namespace std;

class Solution {
public:
	char firstUniqChar(string s) {
		vector<int> hash(256);
		for(int i=0; i<s.size(); i++) {
			hash[s[i]]++;
		}
		for(int i=0; i<s.size(); i++) {
			if(hash[s[i]]==1)
				return s[i];
		}
		return ' ';
	}
};

void test()
{
	string s="leetcode";
	Solution so;
	char c=so.firstUniqChar(s);
	cout<<c<<endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}