#include<iostream>
using namespace std;
#include<string>
class Solution {
private:
	const int N[31];
	const string S[31];
public:
	const int N[31] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 30, 40, 50, 60, 70, 80, 90, 100, 1000, 1000000, 1000000000 };
	const string S[31] = { "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
		"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen",
		"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety",
		"Hundred", "Thousand", "Million", "Billion" };
	const int K = 90;//100的时候就会说one Hundred
	string numberToWords(int num) {
		int i = 30;
		string res;
		if (num == 0)
			return string("Zero");
		while (i >= 0 && N[i]>num)
			i--;
		if (N[i] <= K)
			res += S[i];
		else
			res += (numberToWords(num / N[i]) + " " + S[i]);

		if (num%N[i])
		{
			res += (" " + numberToWords(num % N[i]));
		}
		return res;
	}
};
int main()
{
	return 0;
}