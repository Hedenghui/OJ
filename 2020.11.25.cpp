#include<iostream>
using namespace std;
#include<stack>

class CQueue {
public:
	CQueue() {
	}

	void appendTail(int value) {
		s1.push(value);
	}

	int deleteHead() {
		if (s1.size() == 0)
		{
			return -1;
		}
		while (s1.size()>1)
		{
			s2.push(s1.top());
			s1.pop();
		}
		int ret = s1.top();
		s1.pop();
		while (!s2.empty())
		{
			s1.push(s2.top());
			s2.pop();
		}
		return ret;
	}
	stack<int> s1;
	stack<int> s2;
};
//int main()
//{
//	return 0;
//}