#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
#include<unordered_set>
class Solution {
public:
	bool findWhetherExistsPath(int n, vector<vector<int>>& graph, int start, int target) {
		for (int i = 0; i<graph.size(); i++)
		{
			um[graph[i][0]].insert(graph[i][1]);
		}
		visited = vector<bool>(n, false);
		return dfs(start, target);
	}
	bool dfs(int begin, int end)
	{
		if (begin == end)
			return true;

		if (visited[begin])
			return false;

		visited[begin] = true;//表示访问过了

		for (auto e : um[begin])
		{
			if (dfs(e, end))
			{
				return true;
			}
		}
		return false;

	}
	unordered_map<int, unordered_set<int>> um;
	vector<bool> visited;//表示是否访问
};
int main()
{
	return 0;
}