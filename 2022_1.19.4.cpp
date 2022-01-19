#include <iostream>
#include <vector>

using namespace std;

//57.和为s的两个数字
//https://leetcode-cn.com/problems/he-wei-sde-liang-ge-shu-zi-lcof/
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> res;
		int l=0, r=nums.size()-1;
		while(l<nums.size()&&r>=0) {
			int sum=nums[l]+nums[r];
			if(sum==target) {
				res.push_back(nums[l]);
				res.push_back(nums[r]);
				break;
			}
			else if(sum<target) {
				l++;
			}
			else {
				r--;
			}
		}
		return res;
	}
};

void test()
{
	vector<int> nums={ 2,7,11,15 };
	int target=9;
	Solution s;
	vector<int> res=s.twoSum(nums, target);
	for(auto& it:res)
	{
		cout<<it<<" ";
		it++;
	}
	cout<<endl;
}

void main()
{
	test();
	system("pause");
}