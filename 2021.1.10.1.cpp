#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<algorithm>
class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		vector<vector<string>> set;//��Ϊ�������
		//����map+sort
		map<string, vector<int>> m;
		for (int i = 0; i<strs.size(); i++)
		{
			string temp = strs[i];
			sort(temp.begin(), temp.end());
			m[temp].push_back(i);//��¼�������ͬ���ַ�����λ��i
		}
		for (auto e : m)
		{
			vector<string> vs;
			auto ret = e.second;
			for (auto r : ret)
				vs.push_back(strs[r]);//�������ܹ���ͬ���ַ������뵽vs

			set.push_back(vs);
		}
		return set;
	}
};
int main()
{
	return 0;
}