#include<iostream>
using namespace std;
#include<set>
#include<vector>
class Solution {
public:
	vector<int> findSwapValues(vector<int>& array1, vector<int>& array2) {
		int sum1 = 0, sum2 = 0;
		set<int> s;
		for (auto e : array1)
		{
			sum1 += e;
		}
		for (auto e : array2)
		{
			sum2 += e;
			s.insert(e);
		}
		if (abs(sum1 - sum2) % 2 != 0)
			return vector<int>{};

		int ret = (sum1 - sum2) / 2;
		for (int i = 0; i<array1.size(); i++)
		{
			if (s.find(array1[i] - ret) != s.end())
				return vector<int>{array1[i], array1[i] - ret};
		}
		return vector<int>{};

	}
};
int main()
{
	return 0;
}