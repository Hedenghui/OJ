#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int max_num = nums[0];
		int i = 0;
		while (i<nums.size())
		{
			int sum = 0;
			while (i<nums.size())
			{
				if (sum + nums[i]<0)
				{
					sum += nums[i];
					max_num = max(sum, max_num);
					i++;
					break;
				}
				else
				{
					sum += nums[i];
					max_num = max(sum, max_num);
					i++;
				}
			}
		}
		return max_num;
	}
};
class Solution
{
public:
	int maxSubArray(vector<int> &nums)
	{
		//����Ѱ�������Сֵ����Ŀ����ʼֵһ��Ҫ����������ϵ���С���ֵ
		int result = INT_MIN;
		int numsSize = int(nums.size());
		int sum = 0;
		for (int i = 0; i < numsSize; i++)
		{
			sum += nums[i];
			result = max(result, sum);
			//���sum < 0�����¿�ʼ������
			if (sum < 0)
			{
				sum = 0;
			}
		}

		return result;
	}
};

int main()
{
	return 0;
}