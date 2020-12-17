#include<iostream>
using namespace std;
#include<unordered_set>
#include<algorithm>
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		if (s.length() <= 1) { return s.length(); }

		int res = -1, right = 0, left = 0;
		unordered_set<char> store;

		while (right<s.length())
		{
			while (right < s.length() && !store.count(s[right])) {
				store.insert(s[right]);
				++right;
			}

			res = max(res, right - left);
			store.erase(s[left]);
			left++;
			//if(right >= s.length()) {break;}
		}

		return res;
	}
};
int main()
{
	return 0;
}