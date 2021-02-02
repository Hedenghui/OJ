#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	void dfs(vector<int>& candidates, int target, vector<vector<int>>& vv, vector<int>& v, int idx)
	{
		if (idx == candidates.size())
		{
			return;
		}
		if (target == 0)
		{
			vv.push_back(v);
			return;
		}
		dfs(candidates, target, vv, v, idx + 1);
		if (target - candidates[idx] >= 0)
		{
			v.push_back(candidates[idx]);
			dfs(candidates, target - candidates[idx], vv, v, idx);
			v.pop_back();
		}
	}
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		vector<vector<int>> vv;
		vector<int> v;
		dfs(candidates, target, vv, v, 0);
		return vv;
	}
};
int main()
{
	return 0;
}