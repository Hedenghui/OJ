#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int sum = 0;
		int num = 0;
		int j = 0;
		unordered_map<char, int> um;

		for (int i = 0; i<s.size(); i++)
		{
			if (um.count(s[i]))
			{
				for (; j <= um[s[i]]; j++)
				{
					um.erase(s[j]);
				}
				num = i - j + 1;
			}
			else
			{
				num++;
				sum = max(sum, num);
			}
			um[s[i]] = i;
		}
		return sum;
	}
};
int main()
{
	return 0;
}