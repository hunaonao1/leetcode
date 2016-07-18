#include<iostream>
using namespace std;
#define BUFFERSIZE 1024

void Reverse(char *string,int n)
{		
	int i = 0, j = n-1; 
	while (i < j)
	{
		string[i]= string[i]^string[j];
		string[j] = string[i]^string[j];
		string[i] = string[i]^string[j];
		i++; j--;
	}
}
int main()
{
	char string[BUFFERSIZE] = "I love huzihao and he loves me too.";
	cout << "逆序前为" << string<< endl;
	Reverse(string,strlen(string));
	int s = 0, e = 0;
	for (int e = 0; e < strlen(string) - 1;e++)
	if (string[e] == ' ')
	{
		Reverse(string + s, e - s);
		s = e+1;
	}

	cout << "逆序后为" << string<< endl;
	system("pause");
}
