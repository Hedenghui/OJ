#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	int pileBox(vector<vector<int>>& box) {
		sort(box.begin(), box.end(), [](const vector<int>& a, const vector<int>& b){return a[0]<b[0]; });
		vector<int> dp(box.size() + 1, 0);
		dp[0] = box[0][2];
		int result = dp[0];
		for (int i = 1; i<box.size(); i++)
		{
			int maxh = 0;
			for (int j = 0; j<i; j++)
			{
				if (box[j][0]<box[i][0] && box[j][1]<box[i][1] && box[j][2]<box[i][2])
				{
					maxh = max(maxh, dp[j]);//求出dp[i]前一个可使用的最大值，用于与后面的box[i][2]相加
				}
			}
			dp[i] = maxh + box[i][2];
			result = max(result, dp[i]);//如例二 宽为2有两个，这里就能体现max的作用
		}
		return result;
	}
};
int main()
{
	return 0;
}