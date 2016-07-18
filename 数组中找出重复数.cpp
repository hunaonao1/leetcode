#include<iostream>
using namespace std;
/*int FindInteger(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i]>0)
		{
			if (a[a[i]] > 0)
				a[a[i]] = -a[a[i]];
			else
				return -a[a[i]];
		}
		else
		{
			if (a[-a[i]] > 0)
				a[-a[i]] = -a[-a[i]];
			else
				return -a[-a[i]];
		}
	}
}*/
int FindInteger(int a[], int n)
{
	int x, y;
	x = y = 0;
	do{
		x = a[a[x]];
		y = a[y];
	}
	while (x != y);
	x = 0;
	do{
		x = a[x];
		y = a[y];
	} 
	while (x != y);
	return x;
}
int main()
{
	int a[] = { 1, 2, 3, 3, 5, 4 };
	int size = sizeof(a) / sizeof(a[0]);
	cout << FindInteger(a, size);
	system("pause");
	return 0;
}
