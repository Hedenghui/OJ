#include<iostream>
using namespace std;
#include<vector>
//1.一个字符相同,是回文子串
//2.两个相邻字符相同,是回文子串
//3.若vv[i+1][j-1]==1,则vv[i][j]==1;
class Solution {
public:
	string longestPalindrome(string s) {
		int left = 0, right = 0;
		int max = 0;//最大长度
		vector<vector<int>> vv(s.size(), vector<int>(s.size(), 0));
		for (int i = s.size() - 1; i<s.size(); i--)
		{
			for (int j = i; j<s.size(); j++)
			{
				if (s[i] == s[j])
				{
					if (j - i <= 1)//1,2种情况
					{
						vv[i][j] = 1;
					}
					else if (vv[i + 1][j - 1])//3种情况
					{
						vv[i][j] = 1;
					}
				}
				if (vv[i][j] && j - i + 1>max)
				{
					left = i;
					right = j;
					max = right - left + 1;
				}
			}
		}
		return s.substr(left, right - left + 1);
	}
};
int main()
{
	return 0;
}