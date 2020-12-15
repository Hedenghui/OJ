#include<iostream>
using namespace std;

class Solution {
public:
	int strToInt(string str) {
		long res = 0;
		int max = pow(2, 31) - 1;
		int min = -pow(2, 31);
		if (str.empty())
			return 0;

		int i = 0;
		while (str[i] == ' ')
			i++;

		if (str[i] >= 'a'&&str[i] <= 'z')
			return 0;

		int j = 1;//·ûºÅ±êÖ¾
		if (str[i] == '-')
		{
			j = -1;
			i++;
		}
		else if (str[i] == '+')
		{
			i++;
		}

		while (i<str.size())
		{
			if (str[i] >= '0'&&str[i] <= '9')
			{
				res = res * 10 + j*(str[i] - '0');

				if (res>max)
					return max;
				else if (res<min)
					return min;
			}
			else
				return res;

			i++;
		}
		return res;
	}
};

int main()
{
	return 0;
}