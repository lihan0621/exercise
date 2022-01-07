//53.��������
//https://leetcode-cn.com/problems/maximum-subarray/
#include <iostream>
#include <vector>

using namespace std;


//��������̰���㷨
class Solution
{
public:
	int maxSubArray(vector<int> &nums)
	{
		//����Ѱ�������Сֵ����Ŀ����ʼֵһ��Ҫ����������ϵ���С���ֵ
		int result=INT_MIN;
		int numsSize=int(nums.size());
		int sum=0;
		for(int i=0; i<numsSize; i++)
		{
			sum+=nums[i];
			result=max(result, sum);
			//���sum < 0�����¿�ʼ������
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
		//����Ѱ�������Сֵ����Ŀ����ʼֵһ��Ҫ����������ϵ���С���ֵ
		int result=INT_MIN;
		int numsSize=int(nums.size());
		//��Ϊֻ��Ҫ֪��dp��ǰһ�������int����һά����
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

//����������̬�滮
class Solution
{
public:
	int maxSubArray(vector<int> &nums)
	{
		//����Ѱ�������Сֵ����Ŀ����ʼֵһ��Ҫ����������ϵ���С���ֵ
		int result=INT_MIN;
		int numsSize=int(nums.size());
		//dp[i]��ʾnums����nums[i]��β����������
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



//����һ��������ⷨ
class Solution
{
public:
	int maxSubArray(vector<int> &nums)
	{
		//����Ѱ�������Сֵ����Ŀ����ʼֵһ��Ҫ����������ϵ���С���ֵ
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
