#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
class Solution {
public:
	vector<string> letterCombinations(string digits) {
		vector<string> v;
		if (digits.empty())
			return v;
		unordered_map<char, string> m{
			{ '2', "abc" },
			{ '3', "def" },
			{ '4', "ghi" },
			{ '5', "jkl" },
			{ '6', "mno" },
			{ '7', "pqrs" },
			{ '8', "tuv" },
			{ '9', "wxyz" }
		};

		string hdh;
		back(digits, 0, hdh, m, v);
		return v;

	}
	void back(string& digits, int dex, string& hdh, unordered_map<char, string>& m, vector<string>& v)
	{
		if (dex == digits.size())
		{
			v.push_back(hdh);
		}
		else
		{
			int digit = digits[dex];
			string letter = m.at(digit);
			for (auto e : letter)
			{
				hdh.push_back(e);
				back(digits, dex + 1, hdh, m, v);
				hdh.pop_back();
			}
		}
	}
};
int main()
{
	return 0;
}