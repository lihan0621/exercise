#include <iostream>
#include <string>

using namespace std;

//171.Excel±íÁÐÐòºÅ
//https://leetcode-cn.com/problems/excel-sheet-column-number/
class Solution {
public:
	int titleToNumber(string columnTitle) {
		int number=0;
		long multiple=1;
		for(int i=columnTitle.size()-1; i>=0; i--) {
			int k=columnTitle[i]-'A'+1;
			number+=k*multiple;
			multiple*=26;
		}
		cout<<number<<endl;
		return number;
	}
};
void test()
{
	Solution s;
	s.titleToNumber("FXSHRXW");
}


int main()
{
	test();
	system("pause");
	return 0;
}