#include<iostream>
using namespace std;

class Solution {
public:
	bool isFlipedString(string s1, string s2) {
		if (s1.size() != s2.size())
			return false;

		if ((s1 + s1).find(s2) != -1)
			return true;

		return false;
	}
};
int main()
{
	return 0;
}