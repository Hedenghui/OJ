#include<iostream>
using namespace std;
#include<vector>

void calculate(vector<vector<int>>& vv, int n, int m, vector<int>& v){
	for (int i = 0; i<n - 2; i++){
		for (int j = 0; j<m - 2; j++){
			int flag = 0;
			for (int x = i; x<i + 3; x++){
				for (int y = j; y<j + 3; y++){
					if (vv[x][y]>0)
						flag++;
				}
			}
			if (v[0]<flag){
				v[0] = flag;
				v[1] = i;
				v[2] = j;
			}
		}
	}
}
int main(){
	int n, m, k;
	int x, y;
	while (cin >> n >> m >> k){
		if (n<3)
			n = 3;
		if (m<3)
			m = 3;
		vector<vector<int>> vv(n, vector<int>(m, 0));
		while (k--){
			cin >> x >> y;
			++vv[x - 1][y - 1];
		}
		vector<int> first(3, 0);
		vector<int> second(3, 0);
		calculate(vv, n, m, first);
		for (int i = first[1]; i<first[1] + 3; ++i){
			for (int j = first[2]; j<first[2] + 3; ++j){
				if (vv[i][j]>0){
					--vv[i][j];
				}
			}
		}
		calculate(vv, n, m, second);
		cout << first[0] + second[0] << endl;

	}
	return 0;
}