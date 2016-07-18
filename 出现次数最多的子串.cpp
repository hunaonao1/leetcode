#include<iostream>
#include<vector>
#include<string>
using namespace std;

pair<int, string> chongfu(const string& str){
	vector<string>substrs;
	string substr;
	int len=str.length();
	int count = 1, maxcount = 1;
	for (int i = 0; i < len; i++)
		substrs.push_back(str.substr(i, len - i));
		//cout<<str.substr(i, str.size() - i)<<" ";
	for (int i = 0; i < len-1; i++)
	for (int j = i + 1; j < len; j++)
	{
		count = 1;
		if (substrs[i].substr(0, j - i) == substrs[j].substr(0, j - i))
		{
			count++;
			for (int k = j+(j-i); k < len; k += j - i)
			{
				if (substrs[i].substr(0, j - i) == substrs[k].substr(0, j - i))
					count++;
				else
					break;
			}
			if (count>maxcount)
			{
				maxcount = count;
				substr = substrs[i].substr(0, j - i);
			}
		}
	}
	return make_pair(maxcount, substr);
}

int main(){
	string s; pair<int, string>res;
	cin >> s;
	res=chongfu(s);
	cout << res.first << ':' << res.second;
	system("pause");
}
