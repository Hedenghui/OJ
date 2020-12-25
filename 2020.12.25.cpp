#include<iostream>
using namespace std;
#include<vector>
class TripleInOne {
public:
	vector<int> v;

	TripleInOne(int stackSize) {
		v.resize(stackSize * 3);
		_stackSize = stackSize;
		point[0] = 0;
		point[1] = _stackSize;//3
		point[2] = _stackSize * 2;//6
	}

	void push(int stackNum, int value) {
		if (point[stackNum] >= (stackNum + 1)*_stackSize)
		{
			return;
		}
		else
		{
			v[point[stackNum]++] = value;
		}
	}

	int pop(int stackNum) {
		int j = 0;
		if (point[stackNum] <= (stackNum)*_stackSize)
			return -1;
		else
		{
			j = v[--point[stackNum]];
		}
		return j;

	}

	int peek(int stackNum) {
		int h = 0;
		if (point[stackNum] <= (stackNum)*_stackSize)
			return -1;
		else
		{
			h = v[point[stackNum] - 1];
			return h;
		}
	}

	bool isEmpty(int stackNum) {
		if (point[stackNum] <= (stackNum)*_stackSize)
			return true;
		else
			return false;
	}
private:
	int _stackSize;
	int point[3];
};
int main()
{
	return 0;
}