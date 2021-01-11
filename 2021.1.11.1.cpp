#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	int findString(vector<string>& words, string s) {
		int l = 0, r = words.size() - 1, mid;

		while (l<r)
		{
			while (words[l] == "")
			{
				l++;
			}
			while (words[r] == "")
			{
				r--;
			}
			mid = (l + r) / 2;
			while ((mid >= l) && (words[mid] == ""))
			{
				mid--;
			}
			if (words[mid] == s)
				return mid;
			else
			{
				if (s>words[mid])
					l = mid + 1;
				else
					r = mid;
			}
		}
		if (s == words[l])
			return l;
		else
			return -1;
	}
};
int main()
{
	return 0;
}