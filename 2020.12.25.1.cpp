#include<iostream>
using namespace std;
#include<stack>
class MinStack {
public:
	/** initialize your data structure here. */
	MinStack() {

	}

	void push(int x) {
		if (s1.empty() || x <= s2.top())//注意这里的等号
		{
			s2.push(x);
		}
		s1.push(x);
	}

	void pop() {
		if (s1.top() == s2.top())
			s2.pop();

		s1.pop();
	}

	int top() {
		return s1.top();
	}

	int getMin() {
		return s2.top();
	}
	stack<int> s1;
	stack<int> s2;
};
int main()
{
	return 0;
}