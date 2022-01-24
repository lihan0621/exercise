#include <iostream>

using namespace std;

//64.Çó1+2+...+n
//https://leetcode-cn.com/problems/qiu-12n-lcof/

//µİ¹é
/*
class Solution {
public:
	int sumNums(int n) {
		return n==0?0:n+sumNums(n-1);
	}
};
*/

//¿ìËÙ³Ë
class Solution {
public:
	int sumNums(int n) {
		int ans=0, A=n, B=n+1;

		(B&1)&&(ans+=A);
		A<<=1;
		B>>=1;

		(B&1)&&(ans+=A);
		A<<=1;
		B>>=1;

		(B&1)&&(ans+=A);
		A<<=1;
		B>>=1;

		(B&1)&&(ans+=A);
		A<<=1;
		B>>=1;

		(B&1)&&(ans+=A);
		A<<=1;
		B>>=1;

		(B&1)&&(ans+=A);
		A<<=1;
		B>>=1;

		(B&1)&&(ans+=A);
		A<<=1;
		B>>=1;

		(B&1)&&(ans+=A);
		A<<=1;
		B>>=1;

		(B&1)&&(ans+=A);
		A<<=1;
		B>>=1;

		(B&1)&&(ans+=A);
		A<<=1;
		B>>=1;

		(B&1)&&(ans+=A);
		A<<=1;
		B>>=1;

		(B&1)&&(ans+=A);
		A<<=1;
		B>>=1;

		(B&1)&&(ans+=A);
		A<<=1;
		B>>=1;

		(B&1)&&(ans+=A);
		A<<=1;
		B>>=1;

		return ans>>1;
	}
};

void test()
{
	Solution s;
	int res=s.sumNums(2);
	cout<<res<<endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}
