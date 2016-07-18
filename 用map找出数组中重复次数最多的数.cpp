#include<iostream>
#include<map>
using namespace std;

int findMostFrequent(int *array, int size)
{
	int res=array[0];
	if (size == 0)
		return 0;
	map<int, int>m;
	for (int i = 1; i < size; i++)
	{
		if (++m[array[i]]>m[res])
			res = array[i];
	}
	return res;
}

int main()
{
	int a[] = { 1, 2, 3, 4, 4, 4, 5, 5, 5, 6, 7 };
	cout << findMostFrequent(a, sizeof(a) / sizeof(a[0])) << endl;
	system("pause");
}
