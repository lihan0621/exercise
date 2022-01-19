#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

//58-1.·­×ªµ¥´ÊË³Ðò
//https://leetcode-cn.com/problems/fan-zhuan-dan-ci-shun-xu-lcof/

class Solution {
public:
	string reverseWords(string s) {
		string res;
		stack<char> temp;
		int len=s.size();
		int i=len-1;
		while(i>=0) {
			if(s[i]==' ') {
				if(!temp.empty()) {
					while(!temp.empty()) {
						res.push_back(temp.top());
						temp.pop();
					}
					res.push_back(' ');
				}
				i--;
			}
			else {
				temp.push(s[i]);
				i--;
			}
		}
		while(!temp.empty()) {
			res.push_back(temp.top());
			temp.pop();
		}
		if(res.size()&&res[res.size()-1]==' ')   res.pop_back();
		return res;
	}
};

void test3()
{
	string s="the sky is blue";
	Solution so;
	string res=so.reverseWords(s);
	cout<<res<<endl;
}

void main3()
{
	test3();
	system("pause");
}