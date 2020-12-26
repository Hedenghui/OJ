#include<iostream>
using namespace std;
#include<vector>
#include<queue>
class AnimalShelf {
public:
	vector<int> v{ -1, -1 };
	AnimalShelf() {

	}

	void enqueue(vector<int> animal) {
		if (animal[1] == 0)
			q1.push(animal);
		if (animal[1] == 1)
			q2.push(animal);
	}

	vector<int> dequeueAny() {
		if (q1.empty() && q2.empty())
			return v;
		else if (q1.empty() && !q2.empty())
		{
			vector<int> v2 = q2.front();
			q2.pop();
			return v2;

		}
		else if (!q1.empty() && q2.empty())
		{
			vector<int> v1 = q1.front();
			q1.pop();
			return v1;

		}
		else if (q1.front()[0]<q2.front()[0])
		{
			vector<int> v1 = q1.front();
			q1.pop();
			return v1;
		}
		else
		{
			vector<int> v2 = q2.front();
			q2.pop();
			return v2;
		}


	}

	vector<int> dequeueDog() {
		if (q2.empty())
			return v;

		vector<int> v2 = q2.front();
		q2.pop();
		return v2;
	}

	vector<int> dequeueCat() {
		if (q1.empty())
			return v;

		vector<int> v1 = q1.front();
		q1.pop();
		return v1;
	}
	queue<vector<int>> q1;//Ã¨
	queue<vector<int>> q2;//¹·
};
int main()
{
	return 0;
}