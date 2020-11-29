#include<iostream>
using namespace std;
#include<vector>
// class Solution {
// public:
//     vector<int> exchange(vector<int>& nums) {
//         vector<int> v1;
//         vector<int> v2;
//         vector<int>::iterator it=nums.begin();
//         while(it!=nums.end())
//         {
//             if(*it%2==1)
//             v1.push_back(*it);
//             else
//             v2.push_back(*it);
//             it++;
//         }
//         for(auto e:v2)
//         {
//             v1.push_back(e);
//         }
//         return v1;
//     }
// };
class Solution {
public:
	vector<int> exchange(vector<int>& nums) {
		int begin = 0;
		int end = nums.size() - 1;
		while (begin<end)
		{
			while (begin<end && (nums[begin] & 1) == 1)
				++begin;
			while (begin<end && (nums[end] & 1) == 0)
				--end;
			if (begin<end)
				swap(nums[begin], nums[end]);
		}
		return nums;
	}
};
int main()
{
	return 0;
}