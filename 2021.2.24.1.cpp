#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	int maxProfit(vector<int>& prices) {
		int cur = 0;
		prices.push_back(-1);
		vector<int> st;
		for (int i = 0; i<prices.size(); i++)
		{
			while (!st.empty() && st.back()>prices[i])
			{
				cur = max(cur, st.back() - st.front());
				st.pop_back();
			}
			st.push_back(prices[i]);
		}
		return cur;
	}
};
int main()
{
	return 0;
}