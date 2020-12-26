#include<iostream>
using namespace std;
#include<stack>
class MyQueue {
public:
	/** Initialize your data structure here. */
	MyQueue() {

	}

	/** Push element x to the back of queue. */
	void push(int x) {
		while (!s2.empty())
		{
			s1.push(s2.top());
			s2.pop();
		}
		s1.push(x);

	}

	/** Removes the element from in front of queue and returns that element. */
	int pop() {
		if (s1.empty() && s2.empty())
			return -1;
		while (!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
		int ret = s2.top();
		s2.pop();
		return ret;

	}

	/** Get the front element. */
	int peek() {
		if (s1.empty() && s2.empty())
			return -1;
		while (!s1.empty())
		{
			s2.push(s1.top());
			s1.pop();
		}
		int ret = s2.top();
		return ret;
	}

	/** Returns whether the queue is empty. */
	bool empty() {
		return s1.empty() && s2.empty();
	}
	stack<int> s1;
	stack<int> s2;
};
int main()
{
	return 0;
}