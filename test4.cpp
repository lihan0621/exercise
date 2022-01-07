//53.最大数组和
//https://leetcode-cn.com/problems/maximum-subarray/
#include <iostream>
#include <vector>

using namespace std;


//方法三：贪心算法
class Solution
{
public:
	int maxSubArray(vector<int> &nums)
	{
		//类似寻找最大最小值的题目，初始值一定要定义成理论上的最小最大值
		int result=INT_MIN;
		int numsSize=int(nums.size());
		int sum=0;
		for(int i=0; i<numsSize; i++)
		{
			sum+=nums[i];
			result=max(result, sum);
			//如果sum < 0，重新开始找子序串
			if(sum<0)
			{
				sum=0;
			}
		}

		return result;
	}
};

#if 0
class Solution
{
public:
	int maxSubArray(vector<int> &nums)
	{
		//类似寻找最大最小值的题目，初始值一定要定义成理论上的最小最大值
		int result=INT_MIN;
		int numsSize=int(nums.size());
		//因为只需要知道dp的前一项，我们用int代替一维数组
		int dp(nums[0]);
		result=dp;
		for(int i=1; i<numsSize; i++)
		{
			dp=max(dp+nums[i], nums[i]);
			result=max(result, dp);
		}

		return result;
	}
};

//方法二：动态规划
class Solution
{
public:
	int maxSubArray(vector<int> &nums)
	{
		//类似寻找最大最小值的题目，初始值一定要定义成理论上的最小最大值
		int result=INT_MIN;
		int numsSize=int(nums.size());
		//dp[i]表示nums中以nums[i]结尾的最大子序和
		vector<int> dp(numsSize);
		dp[0]=nums[0];
		result=dp[0];
		for(int i=1; i<numsSize; i++)
		{
			dp[i]=max(dp[i-1]+nums[i], nums[i]);
			result=max(result, dp[i]);
		}

		return result;
	}
};



//方法一：暴力求解法
class Solution
{
public:
	int maxSubArray(vector<int> &nums)
	{
		//类似寻找最大最小值的题目，初始值一定要定义成理论上的最小最大值
		int max=INT_MIN;
		int numsSize=int(nums.size());
		for(int i=0; i<numsSize; i++)
		{
			int sum=0;
			for(int j=i; j<numsSize; j++)
			{
				sum+=nums[j];
				if(sum>max)
				{
					max=sum;
				}
			}
		}

		return max;
	}
};
#endif

int main()
{
	vector<int> res={ -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	Solution s;
	int n=s.maxSubArray(res);
	cout<<n<<endl;
	system("pause");
	return 0;
}
