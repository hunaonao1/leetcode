#include<iostream>
using namespace std;

int FindSecMax(int data[], int size)
{
	int max=data[0], max1=-32767;
	for (int i = 0; i < size; i++)
	{
		if (data[i]>max)
		{
			max1 = max; max = data[i];
		}
		else if (data[i] > max1)
			max1 = data[i];		
	}
	return max1;
}
int main()
{
	int a[] = { 2, 5, 6, 7, 8, 87, 98, 56, 9 };
	cout << FindSecMax(a, sizeof(a) / sizeof(a[0])) << endl;
	system("pause");
}