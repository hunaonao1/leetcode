#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	string res;
	int count=1;
	cin >> s; 
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == s[i + 1])
			count++;
		else{
			res+=s[i];
			res+=count+'0';
			count = 1;
		}
	}
	cout << res << endl;
	system("pause");
	return 0;
}