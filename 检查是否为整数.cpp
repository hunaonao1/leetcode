#include<iostream>
using namespace std;
int main()
{
	char a; 
	while (cin >> a)
	{
		if (a - '0' <= 9 && a - '0' >= 0)
			cout << int(a - '0') << endl;
		else
			cout << "不是整数" << endl;
	}
	system("pause");
}