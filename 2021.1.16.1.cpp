#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
	vector<int> divingBoard(int shorter, int longer, int k) {
		// vector<int> v;
		// if(k==0)
		// return v;
		// for(int i=0;i<=k;i++)
		// {
		//     for(int j=0;j<=k-i;j++)
		//     {
		//         if(i+j==k)
		//         {
		//             v.push_back(shorter*i+longer*j);
		//         }
		//     }
		// }
		// sort(v.begin(),v.end());
		// return v;
		if (k == 0) {
			return vector<int>{};
		}
		if (shorter == longer) {
			return vector<int> {shorter * k};
		}
		vector<int> vec(k + 1);
		for (int i = 0; i <= k; i++) {
			vec[i] = (k - i)*shorter + i*longer;
		}
		return vec;
	}
};
int main()
{
	return 0;
}