#include<iostream>
using namespace std;
#include<vector>
//1.һ���ַ���ͬ,�ǻ����Ӵ�
//2.���������ַ���ͬ,�ǻ����Ӵ�
//3.��vv[i+1][j-1]==1,��vv[i][j]==1;
class Solution {
public:
	string longestPalindrome(string s) {
		int left = 0, right = 0;
		int max = 0;//��󳤶�
		vector<vector<int>> vv(s.size(), vector<int>(s.size(), 0));
		for (int i = s.size() - 1; i<s.size(); i--)
		{
			for (int j = i; j<s.size(); j++)
			{
				if (s[i] == s[j])
				{
					if (j - i <= 1)//1,2�����
					{
						vv[i][j] = 1;
					}
					else if (vv[i + 1][j - 1])//3�����
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