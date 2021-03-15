#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
	int n;
	long long l;
	while (scanf("%d %d", &n, &l) != EOF){
		vector<double> v;
		while (n--){
			double  num;
			cin >> num;
			v.push_back(num);
		}
		sort(v.begin(), v.end());
		//注意边界情况
		double res;
		res = 2 * max(v[0], l - v[v.size() - 1]);
		double sum = 0;
		for (int i = v.size() - 1; i>0; i--){
			sum = max(sum, v[i] - v[i - 1]);
		}
		res = res>sum ? res : sum;
		printf("%0.2f\n", res / 2);
	}
	return 0;

}