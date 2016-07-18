#include<iostream>
using namespace std;

int main()
{
	char *s="AbcABca";
	int count[256] = { 0 };
	for (int i = 0; s[i] != '\0'; i++)
		count[s[i]]++;
	for (int i = 0; i<=256;i++)
	if (count[i] > 0)
		cout << (char)i << "出现了 " << count[i] << " 次" << endl;
	system("pause");
}