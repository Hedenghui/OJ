#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main()
{
	int n, r, avg;

	while (scanf("%d %d %d", &n, &r, &avg) != EOF)
	{
		vector<pair<int, int>> v(n);
		long long sum = 0;
		long long total_sum = avg*n;
		long long s, t;
		for (int i = 0; i<n; i++){
			cin >> s;
			cin >> t;
			v[i].first = s;
			v[i].second = t;
			sum += s;
		}
		sort(v.begin(), v.end(), [](pair<int, int>& p1, pair<int, int>& p2){
			return p1.second<p2.second;
		});
		long long time = 0;
		for (int i = 0; i<n; i++){
			if (sum >= total_sum)
				break;
			if (total_sum - sum>r - v[i].first){
				sum += r - v[i].first;
				time += (r - v[i].first)*v[i].second;
			}
			else{
				time += (total_sum - sum)*v[i].second;
				sum = total_sum;
			}
		}
		printf("%lld\n", time);
	}
	return 0;

}