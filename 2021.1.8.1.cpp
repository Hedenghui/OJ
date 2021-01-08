#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	int waysToChange(int n) {
		vector<int> dp(n + 1, 0);
		dp[0] = 1;
		vector<int> array = { 25, 10, 5, 1 };
		for (int i = 0; i<array.size(); i++)
		{
			for (int j = 1; j<n + 1; j++)
			{
				if (j<array[i])
					continue;
				dp[j] += dp[j - array[i]];
				dp[j] %= 1000000007;
			}
		}
		return dp[n];
	}
};
int main()
{
	return 0;
}