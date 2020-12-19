#include<iostream>
using namespace std;
#include<string>
class Solution {
public:
	string replaceSpaces(string S, int length) {
		int ret = 0;//统计' '个数 
		for (int i = 0; i<length; i++)
		{
			if (S[i] == ' ')
				ret++;
		}
		int newlength = length + 2 * ret;//字符数组新长度
		int j = newlength - 1;
		for (int i = length - 1; i >= 0; i--)
		{
			if (S[i] == ' ')
			{
				S[j--] = '0';
				S[j--] = '2';
				S[j--] = '%';
			}
			else
			{
				S[j--] = S[i];
			}
		}
		S[newlength] = '\0';//结尾给\0
		return S;
	}
};
int main()
{
	return 0;
}