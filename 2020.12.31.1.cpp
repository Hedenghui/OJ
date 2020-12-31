#include<iostream>
using namespace std;

class Solution {
public:
	string printBin(double num) {
		string s;
		string error = "ERROR";
		int j = 30;
		s += "0.";
		while (num>0 && j>0)
		{
			num = num * 2;
			if (num >= 1)
			{
				s += '1';
				num -= 1.0;
			}
			else
				s += '0';

			j--;
		}
		if (j == 0)
		{
			return error;
		}
		return s;
	}
};
int main()
{
	return 0;
}