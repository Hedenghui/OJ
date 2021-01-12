#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
class WordsFrequency {
public:
	unordered_map<string, int> um;
	WordsFrequency(vector<string>& book) {
		for (auto& e : book)
		{
			um[e]++;
		}
	}

	int get(string word) {
		return um[word];
	}
};
int main()
{
	return 0;
}