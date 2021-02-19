#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	int numTrees(int n) {
		vector<int> dp(n + 1);
		dp[0] = 1;
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				dp[i] += dp[i - j] * dp[j - 1];
			}
		}
		return dp[n];
	}
};
int main()
{
	return 0;
}