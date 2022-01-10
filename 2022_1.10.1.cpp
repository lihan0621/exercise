#include <iostream>
#include <vector>


//04.二维数组中的查找
//https://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof/
using namespace std;

class Solution {
public:
	bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
		int i=matrix.size()-1, j=0;
		while(i>=0 && j<matrix[0].size())
		{
			if(matrix[i][j]>target) i--;
			else if(matrix[i][j]<target) j++;
			else return true;
		}
		return false;
	}
};

void test1()
{
	vector<vector<int>> matrix={ {1, 4, 7, 11,15},
								 {2, 5, 8, 12,19},
								 {3, 6, 9, 16,22},
							     {10,13,14,17,24},
								 {18,21,23,26,30} };
	Solution s;
	bool flag=s.findNumberIn2DArray(matrix, 5);
	cout<<flag<<endl;
}

int main1()
{
	test1();
	system("pause");
	return 0;
}