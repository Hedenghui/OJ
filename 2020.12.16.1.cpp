#include<iostream>
using namespace std;
#include<vector>
#include<string>
class Solution {
public:
	//dp[i]=dp[i-1];
	//dp[i]=dp[i-1]+dp[i-2];
	int translateNum(int num) {
		if (num<10)
			return 1;

		string s1 = to_string(num);
		int size = s1.size();
		vector<int> dp(size + 1);
		dp[0] = 1;
		dp[1] = 1;
		for (int i = 2; i <= size; i++)
		{
			if (s1[i - 2] == '1' || (s1[i - 2] == '2'&&s1[i - 1] <= '5'))
				dp[i] = dp[i - 1] + dp[i - 2];
			else
				dp[i] = dp[i - 1];
		}
		return dp[size];
	}
};

int main()
{
	return 0;
}