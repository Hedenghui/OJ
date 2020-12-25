#include<iostream>
using namespace std;
#include<vector>
#include<stack>
class StackOfPlates {
private:
	int size;
	vector<stack<int>> vs;
public:
	StackOfPlates(int cap) {
		size = cap;
	}

	void push(int val) {
		if (size == 0)
			return;

		if (vs.size() == 0 || vs[vs.size() - 1].size() == size)
		{
			stack<int> s;
			s.push(val);
			vs.push_back(s);
		}
		else{
			vs[vs.size() - 1].push(val);
		}
	}

	int pop() {
		if (vs.size() == 0)
			return -1;

		int ret = vs[vs.size() - 1].top();
		vs[vs.size() - 1].pop();
		if (vs[vs.size() - 1].size() == 0)
		{
			auto it = vs.end();
			it--;
			vs.erase(it);
		}
		return ret;

	}

	int popAt(int index) {
		if (index<0 || vs.empty() || index >= vs.size())
		{
			return -1;
		}
		int ret = vs[index].top();
		vs[index].pop();
		if (vs[index].empty())
		{
			vs.erase(vs.begin() + index);
		}
		return ret;
	}
};
int main()
{
	return 0;
}