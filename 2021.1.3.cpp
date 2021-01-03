#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	vector<int> drawLine(int length, int w, int x1, int x2, int y) {
		vector<int> v(length, 0);
		if (length == 0)
			return v;

		int ret = w / 32;
		int left = ret*y + x1 / 32;
		int left_s = x1 % 32;
		int right = ret*y + x2 / 32;
		int right_s = 31 - x2 % 32;

		for (int i = left; i <= right; i++)
		{
			v[i] = 0xffffffff;//置为-1；
		}
		if (right == left)
		{
			v[left] = (unsigned int)v[left] >> left_s + right_s;//需要多移right_s，然后下面左移的时候会左移回来
			v[right] = (unsigned int)v[right] << right_s;
		}
		else//不在一个组，不存在移位问题
		{
			v[left] = (unsigned int)v[left] >> left_s;
			v[right] = (unsigned int)v[right] << right_s;
		}
		return v;
	}
};
int main()
{
	return 0;
}