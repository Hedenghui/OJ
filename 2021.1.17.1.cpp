#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
	//自己研究未出结果
	// vector<int> subSort(vector<int>& array) {
	//     if(array.size()==0)
	//     return vector<int>{-1,-1};
	//     int left=0;
	//     int right=array.size()-1;
	//     while(left<array.size()-1&&array[left+1]>=array[left])
	//     {
	//         left++;
	//     }

	//     while(right>0&&array[right]>=array[right-1])
	//     {
	//         right--;
	//     }
	//     if(left==array.size()-1)
	//     return vector<int>{-1,-1};
	//     int mid=left+1;
	//     //sort(array[mid],array[right-1]);
	//     sort(array.begin()+mid,array.begin()+right);
	//     int summax=max(array[left],array[right-1]);
	//     while(array[left]>=array[mid])
	//     {
	//         left--;
	//         if(left<0)
	//         break;
	//     }
	//     while(summax>=array[right])
	//     {
	//         right++;
	//         if(right>=array.size())
	//         break;
	//     }
	//     return vector<int>{left+1,right-1};
	// }

	vector<int> subSort(vector<int>& array) {
		int n = array.size();
		int maxx = INT_MIN, minn = INT_MAX;
		int l = -1, r = -1;
		for (int i = 0; i < n; ++i) {
			if (array[i] < maxx) r = i;
			else maxx = array[i];
		}
		for (int i = n - 1; i >= 0; --i) {
			if (array[i] > minn) l = i;
			else minn = array[i];
		}
		return{ l, r };
	}

};
int main()
{
	return 0;
}
