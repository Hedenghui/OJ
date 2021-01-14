#include<iostream>
using namespace std;
#include<vector>
#include<string>
class Solution {
public:
	string tictactoe(vector<string>& board) {
		int size = board.size();
		int sum_low = 0;
		int sum_cur = 0;
		int sum_left = 0;
		int sum_right = 0;
		bool ret = true;
		for (int i = 0; i<size; i++)
		{
			int sum_low = 0, sum_cur = 0;
			sum_left += board[i][i];
			sum_right += board[i][size - 1 - i];
			for (int j = 0; j<size; j++)
			{
				if (board[i][j] == ' ')
					ret = false;

				sum_cur += board[i][j];//ºá
				sum_low += board[j][i];//Êú
			}
			if (sum_cur == 'O'*size || sum_low == 'O'*size)
				return string("O");
			if (sum_cur == 'X'*size || sum_low == 'X'*size)
				return string("X");
		}
		if (sum_left == 'O'*size || sum_right == 'O'*size)
			return string("O");
		if (sum_left == 'X'*size || sum_right == 'X'*size)
			return string("X");
		if (ret)
			return string("Draw");
		else
			return string("Pending");
	}
};
//int main()
//{
//	return 0;
//}