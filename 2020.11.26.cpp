#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	bool exist(vector<vector<char>>& board, string word) {
		ret = board.size();//3
		pow = board[0].size();//4
		for (int i = 0; i<ret; i++)
		{
			for (int j = 0; j<pow; j++)
			{
				if (dps(board, word, i, j, 0))
					return true;
			}
		}
		return false;
	}
	int ret, pow;
	bool dps(vector<vector<char>>& board, string word, int i, int j, int k)
	{
		if (i<0 || i >= ret || j<0 || j >= pow || board[i][j] != word[k])
			return false;
		if (k == word.size() - 1)
			return true;
		if (board[i][j] == word[k])
			board[i][j] = '\0';
		bool res = (dps(board, word, i + 1, j, k + 1) || dps(board, word, i - 1, j, k + 1) || dps(board, word, i, j + 1, k + 1) || dps(board, word, i, j - 1, k + 1));
		if (board[i][j] == '\0')
			board[i][j] = word[k];

		return res;
	}
};
int main()
{
	return 0;
}