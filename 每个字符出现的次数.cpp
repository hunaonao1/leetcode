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
		cout << (char)i << "������ " << count[i] << " ��" << endl;
	system("pause");
}