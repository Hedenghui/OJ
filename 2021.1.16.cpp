#include<iostream>
using namespace std;
#include<vector>
class Operations {
public:
	Operations() {
	}

	int minus(int a, int b) {
		return a + (-b);
	}

	int multiply(int a, int b) {
		// int k=abs(b);
		// int key=0;
		// while(k--)
		// {
		//     key+=a;
		// }
		// if(b<0)
		// {
		//     return -1*key;
		// }
		// return key;

		if (a == 0 || b == 0) return 0;
		if (a == 1) return b;
		if (b == 1) return a;
		if (a == -1) return -b;
		if (b == -1) return -a;

		int cnt = 0;
		if (a < 0) cnt = cnt + 1, a = -a;
		if (b < 0) cnt = cnt + 1, b = -b;
		if (a > b) swap(a, b);

		vector<int> tmp, count;
		long t = b;
		int k = 1;
		while (t <= INT_MAX) tmp.push_back(t), count.push_back(k), t = t + t, k = k + k;

		int res = 0;
		for (int i = tmp.size() - 1; i >= 0; i = minus(i, 1)) {
			while (a >= count[i]) a = minus(a, count[i]), res = res + tmp[i];
		}

		if (cnt == 1) return -res;
		return res;
	}

	int divide(int a, int b) {
		if (a == 0 || b == 0) return 0;
		if (b == INT_MAX || b == INT_MIN) return 0;
		if (b == 1) return a;
		if (b == -1) return -a;

		// ·ûºÅÎ»
		int cnt = 0;
		if (a < 0) cnt = cnt + 1, a = -a;
		if (b < 0) cnt = cnt + 1, b = -b;
		if (a < b) return 0;

		vector<int> tmp, count;
		long t = b;
		int k = 1;
		while (a >= t)
		{
			tmp.push_back(t);
			count.push_back(k);
			t = t + t;
			k = k + k;
		}

		int res = 0;
		for (int i = tmp.size() - 1; i >= 0; i = minus(i, 1)) {
			while (a >= tmp[i])
			{
				a = minus(a, tmp[i]);
				res = res + count[i];
			}
		}

		if (cnt == 1) return -res;
		return res;
	}
};

int main()
{
	return 0;
}