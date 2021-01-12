#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	vector<int> swapNumbers(vector<int>& numbers) {
		numbers[0] ^= numbers[1];
		numbers[1] ^= numbers[0];
		numbers[0] ^= numbers[1];
		return numbers;
	}
};
int main()
{
	return 0;
}