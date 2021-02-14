#include<iostream>
using namespace std;
#include<vector>
class Solution
{
public:
	bool exist(vector<vector<char>>& board, string word)
	{
		for (int i = 0; i<board.size(); i++)
		{
			for (int j = 0; j<board[0].size(); j++)
			{
				if (bfs(board, word, i, j, 0))
					return true;
			}
		}
		return false;
	}
	bool bfs(vector<vector<char>>& board, string& word, int i, int j, int length)
	{
		if (i<0 || j<0 || i >= board.size() || j >= board[0].size() || length >= word.size() || word[length] != board[i][j])
			return false;
		if (length == word.size() - 1 && word[length] == board[i][j])
			return true;
		char temp = board[i][j];
		board[i][j] = '-';
		bool flag = bfs(board, word, i, j + 1, length + 1) || bfs(board, word, i, j - 1, length + 1) || bfs(board, word, i - 1, j, length + 1) || bfs(board, word, i + 1, j, length + 1);
		board[i][j] = temp;
		return flag;
	}
};
int main()
{
	return 0;
}