#include<iostream>
using namespace std;
#include<vector>
#include<map>
class Solution {
public:
	int search(vector<int>& nums, int target) {
		map<int, int> m;
		for (auto e : nums)
		{
			m[e]++;
		}
		return m[target];
	}
};
int main()
{
	return 0;
}