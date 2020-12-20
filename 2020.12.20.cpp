#include<iostream>
using namespace std;
#include<string>
#include<cstdlib>

class Solution {
public:
	bool oneEditAway(string first, string second) {
		int size1 = first.size();
		int size2 = second.size();

		if (abs(size1 - size2)>1)
			return false;

		int i = 0;
		int j = size1 - 1;
		int k = size2 - 1;
		while (i <= j&&i <= k&&first[i] == second[i])
		{
			i++;
		}
		while (j >= 0 && k >= 0 && first[j] == second[k])
		{
			j--;
			k--;
		}
		return j - i<1 && k - i<1;
	}
};

int main()
{
	return 0;
}