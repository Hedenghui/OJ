#include<iostream>
using namespace std;
#include<vector>
int main()
{
	int n, a, b, c, d, e, f, g, h;
	while (scanf("%d" "%d" "%d" "%d" "%d" "%d" "%d" "%d" "%d", &n, &a, &b, &c, &d, &e, &f, &g, &h) != EOF){
		vector<int> v;
		int total = 0;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		v.push_back(d);
		v.push_back(e);
		v.push_back(f);
		v.push_back(g);
		v.push_back(h);
		for (int i = 0; i<v.size() - 2; i++){
			int num = (v[i] - v[v.size() - 2])*(v[i] - v[v.size() - 2]) + (v[i + 1] - v[v.size() - 1])*(v[i + 1] - v[v.size() - 1]);
			i++;
			if (num <= (n*n))
				total++;
		}
		cout << total << "x" << endl;
	}
	return 0;
}