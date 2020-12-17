#include<iostream>
using namespace std;
class Solution {
public:
	int findNthDigit(int n) {
		if (n == 0) return 0;
		int digit = 1;
		long start = 1;
		long count = 9;
		while (n>count){
			n -= count;
			digit += 1;
			start *= 10;
			count = digit*start * 9;
		}
		long num = start + (n - 1) / digit;//�ж�n��Ӧ�����ĸ���
		int index = (n - 1) % digit;//��������ĵڼ�λ
		while (index<(digit - 1)){
			num /= 10;
			digit--;
		}
		return num % 10;
	}
};
int main()
{
	return 0;
}