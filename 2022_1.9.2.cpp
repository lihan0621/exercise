#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        
        int i=0;
        while(i<nums.size()) {
            if(nums[i]==i) {
                i++;
                continue;
            }
            if(nums[nums[i]]==nums[i])
                return nums[i];
            swap(nums[i], nums[nums[i]]);
        }
        return -1;
    /*ʹ�ù�ϣ�����Ȼ���ԣ����ǵ��������ر��ʱ��������ͨ�����еĲ�������
        vector<int> hash(256, 0);
        for (int i=0; i<nums.size(); i++) {
            hash[nums[i]]++;
        }
        for (int i=0; i<hash.size(); i++) {
            if (hash[i] > 1)
                return i;
        }
        return -1;
        */
    }
};

void test2()
{
    vector<int> nums={ 1,2,3,2,4,5,6,3,7 };
    Solution s;
    int num=s.findRepeatNumber(nums);
    cout<<num<<endl;
}

int main2()
{
	test2();
	system("pause");
	return 0;
}