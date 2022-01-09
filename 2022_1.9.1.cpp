#include <iostream>
#include <vector>

using namespace std;

/*
class Solution {
public:
	/*	利用哈希表只能查找正数
	int search(vector<int>& nums, int target) {
		vector<int> hash(256, 0);
		for(int i=0; i<nums.size(); ++i)
		{
			hash[nums[i]]++;
		}
		return hash[target];
	}*/
	/*暴力求解法
	int flag=0;
	for(int i=0; i<nums.size(); ++i)
	{
		if(nums[i]==target)
			flag++;
	}
	return flag;
	

};
*/
//二分查找法
class Solution {
public:
	int binarySearch(vector<int>& nums, int target, bool lower) {
		int left=0, right=(int)nums.size()-1, ans=(int)nums.size();
		while(left<=right) {
			int mid=(left+right)/2;
			if(nums[mid]>target||(lower&&nums[mid]>=target)) {
				right=mid-1;
				ans=mid;
			}
			else {
				left=mid+1;
			}
		}
		return ans;
	}

	int search(vector<int>& nums, int target) {
		int leftIdx=binarySearch(nums, target, true);
		int rightIdx=binarySearch(nums, target, false)-1;
		if(leftIdx<=rightIdx&&rightIdx<nums.size()&&nums[leftIdx]==target&&nums[rightIdx]==target) {
			return rightIdx-leftIdx+1;
		}
		return 0;
	}
};


void test1()
{
	vector<int> nums={ 1,2,2,3,4,5 };
	Solution s;
	int num=s.search(nums, 2);
	cout<<num<<endl;
}

int main1()
{
	test1();
	system("pause");
	return 0;
}