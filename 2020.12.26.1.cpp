#include<iostream>
using namespace std;
#include<stack>
class SortedStack {
public:
	SortedStack() {

	}

	void push(int val) {
		if (!v1.empty())
		{
			if (val>v1.top())
			{
				while (!v1.empty() && val>v1.top())
				{
					v2.push(v1.top());
					v1.pop();
				}
				v2.push(val);
				while (!v2.empty())
				{
					v1.push(v2.top());
					v2.pop();
				}
			}
			else
			{
				v1.push(val);
			}
		}
		else
			v1.push(val);

	}

	void pop() {
		if (!v1.empty())
			v1.pop();
	}

	int peek() {
		if (v1.empty())
			return -1;
		int ret = v1.top();
		return ret;
	}

	bool isEmpty() {
		if (v1.empty())
			return true;

		return false;
	}
	stack<int> v1;
	stack<int> v2;
};
int main()
{
	return 0;
}