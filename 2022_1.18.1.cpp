#include <iostream>
#include <vector>

using namespace std;

//42.连续子数组的最大和
//https://leetcode-cn.com/problems/lian-xu-zi-shu-zu-de-zui-da-he-lcof/
/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty())
            return 0;
        vector<int> maxSum(nums);
        for(int i = 1; i < nums.size(); ++i)
        {
            maxSum[i] = max(maxSum[i - 1] + nums[i], nums[i]);
        }
        int ret = maxSum[0];
        for(int i = 1; i < maxSum.size(); ++i)
            ret = max(ret, maxSum[i]);
        return ret;
    }
};
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty())
            return 0;
        //vector<int> maxSum(nums);
        int ret=nums[0];
        for(int i=1; i<nums.size(); ++i)
        {
            nums[i]=max(nums[i-1]+nums[i], nums[i]);
            ret=max(ret, nums[i]);
        }
        /*
        for(int i = 1; i < maxSum.size(); ++i)
            ret = max(ret, maxSum[i]);
        */
        return ret;
    }
};

void test1()
{
    vector<int> nums={ -2,1,-3,4,-1,2,1,-5,4 };
    Solution s;
    int ret=s.maxSubArray(nums);
    cout<<ret<<endl;
}

int main1()
{
	test1();
	system("pause");
	return 0;
}