#include<iostream>
using namespace std;
#include<map>
#include<vector>
class Solution {
public:
	int majorityElement(vector<int>& nums) {
		map<int, int> m;
		for (auto e : nums)
		{
			m[e]++;
		}
		int a;
		map<int, int>::iterator it = m.begin();
		while (it != m.end())
		{
			if ((it)->second >= (nums.size() / 2 + 1))
			{
				a = it->first;
				break;
			}
			it++;
		}

		return a;
	}
};
int main()
{
	return 0;
}