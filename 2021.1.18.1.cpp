#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	vector<string> getValidT9Words(string num, vector<string>& words) {
		vector<string> ret;//���������
		string letters[10] = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
		int count = 0;//���� ����ȴ������ڸ���˵������
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
			count = 0;//��0�������һ������
		}
		return ret;
	}
};
int main()
{
	return 0;
}