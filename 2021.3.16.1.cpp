#include<iostream>
using namespace std;
#include<set>
#include<string>
int main(){
	set<string> ss;
	string s;
	while (cin >> s){
		ss.insert(s);
	}
	cout << ss.size() << endl;
	return 0;
}