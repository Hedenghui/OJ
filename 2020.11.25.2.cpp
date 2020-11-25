#include<iostream>
using namespace std;
#include<vector>

// class Solution {
// public:
//     int minArray(vector<int>& numbers) {
//         // sort(numbers.begin(),numbers.end());
//         // return numbers[0];
//         for(int i=numbers.size()-1;i>0;i--)
//         {
//             if(numbers[i]<numbers[i-1])
//             return numbers[i];
//         }
//         return numbers[0];
//     }
// };
class Solution {
public:
	int minArray(vector<int>& numbers) {
		int i = 0, j = numbers.size() - 1;
		while (i < j) {
			int m = (i + j) / 2;
			if (numbers[m] > numbers[j]) i = m + 1;
			else if (numbers[m] < numbers[j]) j = m;
			else j--;
		}
		return numbers[i];
	}
};

int main()
{
	return 0;
}