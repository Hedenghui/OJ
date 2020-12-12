#include<iostream>
using namespace std;
#include<stack>
#include<queue>
class MaxQueue {
public:
	queue<int> q;
	stack<int> s1;
	stack<int> s2;
	MaxQueue() {
	}

	int max_value() {
		if (s1.empty())
			return -1;
		return s1.top();

	}

	void push_back(int value) {
		q.push(value);

		while (!s1.empty() && value<s1.top())
		{
			int m = s1.top();
			s2.push(m);
			s1.pop();
		}
		s1.push(value);
		while (!s2.empty())
		{
			int n = s2.top();
			s1.push(n);
			s2.pop();
		}
	}

	int pop_front() {
		if (q.empty())
			return -1;
		while (s1.top() != q.front())
		{
			int j = s1.top();
			s2.push(j);
			s1.pop();
		}
		int h = s1.top();
		s1.pop();
		while (!s2.empty())
		{
			int k = s2.top();
			s1.push(k);
			s2.pop();
		}
		q.pop();
		return h;
	}

};
//int main()
//{
//	return 0;
//}