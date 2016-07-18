#include<iostream>
#include<string>
using namespace std;

void fun(char *w, int m)
{
	int i = 0, len = strlen(w);
	if (m > len)m = len;
	while (len-m>0||(m=0)!=0)
	{
		for (i = 0, w[len] = w[0], ++m; i < len;i++)
			w[i] = w[i + 1];
	}
}

int main()
{
	char *s="abcdefg";
	fun(s, 3);
	cout << s;
	system("pause");
	return 0;
}