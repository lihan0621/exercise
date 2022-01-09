#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int missingNumber(vector<int>& nums) {
		vector<int> hash(10000, 0);
		for(int i=0; i<nums.size(); i++) {
			hash[nums[i]]++;
		}
		for(int i=0; i<10000; ++i) {
			if(hash[i]==0)
				return i;
		}
		return -1;
	}
};

void test()
{
	vector<int> nums={ 0,1,2,4,5,6,7,8 };
	Solution s;
	int num=s.missingNumber(nums);
	cout<<num<<endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}