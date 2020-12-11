#include<iostream>
using namespace std;
#include<string>
class Solution {
public:
	string reverseWords(string s) {
		// istringstream ss(s);
		// string res,ret;
		// while(ss>>res)
		// {
		//     ret=res+' '+ret;
		// }
		// return ret.substr(0,ret.size()-1);

		if (s.empty())
			return s;
		string res;
		for (int i = s.size() - 1; i >= 0; i--)
		{
			if (s[i] != ' ')
			{
				int j = i;
				while (j >= 0 && s[j] != ' ')
				{
					j--;
				}
				for (int k = j + 1; k <= i; k++)
				{
					res.push_back(s[k]);
				}
				res.push_back(' ');
				i = j;
			}

		}
		res.pop_back();
		return res;
	}
};

//int main()
//{
//	return 0;
//}