#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	vector<vector<int>> findContinuousSequence(int target) {
		vector<vector<int>> vv;
		vector<int> v;
		for (int i = 0; i<target; i++)
		{
			v.push_back(i + 1);
		}
		int a = 0;
		int b = 1;

		while (a<b)
		{
			vector<int> v1;
			int sum = (v[a] + v[b])*(b - a + 1) / 2;
			if (sum<target)
				b++;
			else if (sum>target)
				a++;
			else if (sum == target)
			{
				int s = a;
				for (; a <= b; a++)
				{
					v1.push_back(v[a]);
				}
				vv.push_back(v1);
				a = s;
				a++;
			}
		}
		return vv;
	}
};
//int main()
//{
//	return 0;
//}