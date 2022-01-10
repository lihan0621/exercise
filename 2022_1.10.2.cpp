#include <iostream>
#include <vector>


//11.旋转数组的最小数字
//https://leetcode-cn.com/problems/xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof/
using namespace std;

/* 暴力求解法
class Solution {
public:
	int minArray(vector<int>& numbers) {
		int min=numbers[0];
		for(int i=1; i<numbers.size(); i++)
		{
			if(numbers[i]<min)
				min=numbers[i];
		}
		return min;
	}
};
*/ 
// 二分查找法
class Solution {
public:
	int minArray(vector<int>& numbers) {
		int low=0;
		int high=numbers.size()-1;
		while(low<high) {
			int pivot=low+(high-low)/2;
			if(numbers[pivot]<numbers[high]) {
				high=pivot;
			}
			else if(numbers[pivot]>numbers[high]) {
				low=pivot+1;
			}
			else {
				high-=1;
			}
		}
		return numbers[low];
	}
};

void test2()
{
	vector<int> numbers={ 3,4,5,1,2 };
	Solution s;
	int min=s.minArray(numbers);
	cout<<min<<endl;
}

int main2()
{
	test2();
	system("pause");
	return 0;
}