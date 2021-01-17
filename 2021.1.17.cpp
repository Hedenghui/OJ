#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<string>
class Solution {
public:
	vector<int> masterMind(string solution, string guess) {
		vector<int> answer;
		int right = 0;
		int fright = 0;//Î±²Â¶Ô
		map<char, int> m;
		for (int i = 0; i<solution.size(); i++)
		{
			m[solution[i]]++;
			if (solution[i] == guess[i])
				right++;
		}
		answer.push_back(right);
		for (int i = 0; i<guess.size(); i++)
		{
			if (m[guess[i]] >= 1)
			{
				fright++;
				m[guess[i]]--;
			}
		}
		answer.push_back(fright - right);
		return answer;
	}
};
int main()
{
	return 0;
}