#include<iostream>
using namespace std;
#include<vector>

//最大公约数---辗转相除法
int Greatest_common_divisor(int a, int b)
{
	int temp;
	while (b)//temp不为0的话
	{
		temp = b;

		b = a%b;
		a = temp;
	}

	return a;
}
int main(){
	int n, a;
	while (scanf("%d %d", &n, &a) != EOF){
		vector<int> v;
		while (n--){
			int num;
			cin >> num;
			v.push_back(num);
		}
		int a_now = a;
		for (int i = 0; i<v.size(); i++)
		{
			if (a_now >= v[i]){
				a_now += v[i];
			}
			else{
				a_now += Greatest_common_divisor(a_now, v[i]);
			}
		}
		cout << a_now << endl;
	}
	return 0;
}