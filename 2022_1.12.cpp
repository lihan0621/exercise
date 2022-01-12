#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

bool a[];
using namespace std;

//349.两个数组的交集
//https://leetcode-cn.com/problems/intersection-of-two-arrays/

//这个方法是我第一时间的第一个思路，虽然不是很简洁，算法效率也不高，但好歹能通过
class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
		vector<int> hash(10000);
		vector<int> same;
		for(int i=0; i<nums1.size(); i++) {
			hash[nums1[i]]++;
		}
		for(int i=0; i<nums2.size(); i++) {
			if(hash[nums2[i]]!=0)
				same.push_back(nums2[i]);
		}
		int cur=0, pre=1;
		vector<int> fin;
		while(cur<same.size()&&pre<same.size()) {
			if(same[cur]!=same[pre]) {
				fin.push_back(same[cur]);
				cur=pre;
				pre++;
			}
			else {
				pre++;
			}
		}
		if(same.empty())
			return same;
		fin.push_back(same.back());
		return fin;
	}
};
/*
class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		unordered_set<int> set1, set2;
		for(auto& num:nums1) {
			set1.insert(num);
		}
		for(auto& num:nums2) {
			set2.insert(num);
		}
		return getIntersection(set1, set2);
	}

	vector<int> getIntersection(unordered_set<int>& set1, unordered_set<int>& set2) {
		if(set1.size()>set2.size()) {
			return getIntersection(set2, set1);
		}
		vector<int> intersection;
		for(auto& num:set1) {
			if(set2.count(num)) {
				intersection.push_back(num);
			}
		}
		return intersection;
	}
};
*/
/*
class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
		int len1=nums1.size(), len2=nums2.size();
		int index1=0, index2=0;
		vector<int> same;
		while(index1<len1&&index2<len2) {
			int num1=nums1[index1], num2=nums2[index2];
			if(num1==num2) {
				if(!same.size()||num1!=same.back()) {
					same.push_back(num1);
				}
				index1++;
				index2++;
			}
			else if(num1<num2) {
				index1++;
			}
			else {
				index2++;
			}
		}
		return same;
	}
};
*/

void test1()
{
	vector<int> nums1={ 4,9,5 };
	vector<int> nums2={ 9,4,9,8,4 };
	Solution s;
	vector<int> res=s.intersection(nums1, nums2);
	for(auto& it:res) {
		cout<<it<<" ";
		it++;
	}
	cout<<endl;
}

int main1()
{
	test1();
	system("pause");
	return 0;
}