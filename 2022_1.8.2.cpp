#include <iostream>
#include <string>

using namespace std;
//05.Ìæ»»¿Õ¸ñ
//https://leetcode-cn.com/problems/ti-huan-kong-ge-lcof/
class Solution1 {
public:
	string replaceSpace(string s) {
		string News;
		for(int i=0; i<s.size(); ++i)
		{
			if(s[i]!=' ')
				News+=s[i];
			else
				News+="%20";
		}
		return News;
	}
};

//58.×óÐý×ª×Ö·û´®
//https://leetcode-cn.com/problems/zuo-xuan-zhuan-zi-fu-chuan-lcof/
class Solution {
public:
	/*	string reverseLeftWords(string s, int n) {
		string News=s;
		s.erase(0, n);
		s+=News.erase(n, News.size()-n+1);
		return s;
	}*/
	string reverseLeftWords(string s, int n) {
		s+=s;
		return s.substr(n, s.size()/2);
	}

};

int main2()
{

	system("pause");
	return 0;
}