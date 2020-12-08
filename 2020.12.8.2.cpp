#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
class Solution {
public:
	int nthUglyNumber(int n) {
		vector<int> v(n);
		v[0] = 1;
		int two = 0, three = 0, five = 0;

		for (int i = 1; i<n; i++)
		{
			int t1 = v[two] * 2;
			int t2 = v[three] * 3;
			int t3 = v[five] * 5;

			v[i] = min(min(t1, t2), t3);
			if (v[i] == t1)
				two++;
			if (v[i] == t2)
				three++;
			if (v[i] == t3)
				five++;
		}
		return v[n - 1];
	}
};
int main()
{
	return 0;
}