#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//40.最小的k个数
//https://leetcode-cn.com/problems/zui-xiao-de-kge-shu-lcof/
class Solution {
public:
	vector<int> getLeastNumbers(vector<int>& arr, int k) {
		vector<int> vec(k, 0);
		sort(arr.begin(), arr.end());
		for(int i=0; i<k; ++i) {
			vec[i]=arr[i];
		}
		return vec;
	}
};

void test()
{
	vector<int> arr={ 3,2,1 };
	Solution s;
	vector<int> res=s.getLeastNumbers(arr, 2);
	for(auto& it:res)
	{
		cout<<it<<" ";
		it++;
	}
	cout<<endl;
}

int main()
{
	test();
	system("pause");
	return 0;
}