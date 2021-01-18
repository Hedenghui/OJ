#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	vector<string> getValidT9Words(string num, vector<string>& words) {
		vector<string> ret;//返回最后结果
		string letters[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
		int count = 0;//计数 当相等次数等于个数说明符合
		string hdh;
		for (int i = 0; i<words.size(); i++)
		{
			for (int j = 0; j<words[i].size(); j++)
			{
				hdh = letters[num[j] - '0'];
				if (hdh.find(words[i][j]) != hdh.npos)
					count++;
			}
			if (count == words[i].size())
				ret.push_back(words[i]);
			count = 0;//归0，检测下一个单词
		}
		return ret;
	}
};
int main()
{
	return 0;
}