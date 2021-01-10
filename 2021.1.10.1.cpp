#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>
class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		vector<vector<string>> set;//作为结果返回
		//利用map+sort
		map<string, vector<int>> m;
		for (int i = 0; i<strs.size(); i++)
		{
			string temp = strs[i];
			sort(temp.begin(), temp.end());
			m[temp].push_back(i);//记录排序后相同的字符串的位置i
		}
		for (auto e : m)
		{
			vector<string> vs;
			auto ret = e.second;
			for (auto r : ret)
				vs.push_back(strs[r]);//将排序能够相同的字符串加入到vs

			set.push_back(vs);
		}
		return set;
	}
};
int main()
{
	return 0;
}