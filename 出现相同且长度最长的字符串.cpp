#include<iostream>
#include<vector>
#include<string>
using namespace std;

pair<int, string> fun(const string& str)
{
	pair<int, string>res;
	string substr,temp;
	int l, r,n=1;
	int len = str.length();
	for (int i = len-1; i >0;i--)
		for (int j = 0; j < len; j++)
		{
			if(i + j <=len)
			{
				temp = str.substr(j, i);
				l = str.find(temp);
				r = str.rfind(temp);
				if (r != l)
				{
					return make_pair(temp.length(), temp);
				}
			}
		}
		return res;
}

int main()
{
	string s;
	cin >> s;
	cout<<fun(s).first << ":" << fun(s).second << endl;
	system("pause");
	return 0;
}