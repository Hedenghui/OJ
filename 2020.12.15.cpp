#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	vector<int> constructArr(vector<int>& a) {
		int size = a.size();
		vector<int> v(size, 1);

		for (int i = 0, ret = 1; i<v.size(); i++)
		{
			v[i] *= ret;
			ret *= a[i];
		}
		for (int j = v.size() - 1, ret = 1; j >= 0; j--)
		{
			v[j] *= ret;
			ret *= a[j];
		}
		return v;

	}
};
int main()
{
	return 0;
}