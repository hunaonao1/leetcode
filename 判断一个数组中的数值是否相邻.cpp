#include<iostream>
using namespace std;
int max(int a[], int size)
{
	int res = 0;
	for (int i = 1; i<size;i++)
	if (a[i]>res&&a[i]!=0)
		res = a[i];
	return res;
}
int min(int a[], int size)
{
	int res = 100;
	for (int i = 1; i<size;i++)
	if (a[i]<res&&a[i]!=0)
		res = a[i];
	return res;
}
bool Iscontinues(int a[], int size)
{
	if (max(a, size) - min(a, size) > size - 1)
		return false;
	else
		return true;
}
int main()
{
	int array[] = { 8, 7, 5, 0, 6 };
	int size = sizeof(array) / sizeof(array[0]);
	if (Iscontinues(array, size))
		cout << "是连续的" << endl;
	else
		cout << "非连续" << endl;
	system("pause");
}