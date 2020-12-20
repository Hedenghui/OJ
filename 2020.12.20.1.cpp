#include<iostream>
using namespace std;
#include<string>
class Solution {
public:
	string compressString(string S) {
		int N = S.length();
		string res;
		int i = 0;
		while (i < N) {
			int j = i;
			while (j < N && S[j] == S[i]) {
				j++;
			}
			res += S[i];
			res += to_string(j - i);
			i = j;
		}

		if (res.length() < S.length()) {
			return res;
		}
		else {
			return S;
		}
	}
};
int main()
{
	return 0;
}
