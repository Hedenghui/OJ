#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	int sum(int num)
	{
		int j = 0;
		for (int i = 0; i<32; i++)
		{
			if (num&(1 << i))
			{
				j++;
			}
		}
		return j;
	}
	vector<int> findClosedNumbers(int num) {
		int s = sum(num);
		vector<int> v{ -1, -1 };
		for (int i = num + 1; i <= 2147483647; i++)
		{
			if (sum(i) == s)
			{
				v[0] = i;
				break;
			}
		}
		for (int i = num - 1; i >= 0; i--)
		{
			if (sum(i) == s)
			{
				v[1] = i;
				break;
			}
		}
		return v;
	}
};
int main()
{
	return 0;
}