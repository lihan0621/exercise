#include <iostream>
#include <vector>

using namespace std;

//47.礼物的最大价值
//https://leetcode-cn.com/problems/li-wu-de-zui-da-jie-zhi-lcof/
class Solution {
public:
	int maxValue(vector<vector<int>>& grid) {
		int m=grid.size(), n=grid[0].size();
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				if(i==0&&j==0)
					continue;
				if(i==0)
					grid[i][j]+=grid[i][j-1];
				else if(j==0)
					grid[i][j]+=grid[i-1][j];
				else
					grid[i][j]+=max(grid[i][j-1], grid[i-1][j]);
			}
		}
		return grid[m-1][n-1];
	}
};


void test()
{

}

int main()
{
	test();
	system("pause");
	return 0;
}
