#include <iostream>
using namespace std;

void swap(int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

/*
void insertSort(int *a,int len)//插入
{
int i,j;
for(i=0;i<len-1;i++)
{
for(j=i+1;j>=1;j--)
{
if(a[j]<a[j-1])
swap(&a[j],&a[j-1]);
}
}
}*/

void shell(int *a, int d, int len)//希尔
{
	int i, j;

	for (i = d; i<len; i++)
	{
		for (j = i + d; j >= i && j<len; j--)
		{
			if (a[j]<a[j - d])
				swap(&a[j], &a[j - d]);
		}

	}
}

void shellSort(int *a, int d, int len)
{
	while (d >= 1)
	{
		shell(a, d, len);
		d = d / 2;
	}
}


/*
void bubbleSort(int *a,int len)//冒泡
{
for(int i=0;i<len;i++)
{
bool flag=false;
for(int j=len-1;j>i;j--)
{
if(a[j]<a[j-1])
{swap(&a[j],&a[j-1]);flag=true;}
}
if(!flag)
return;
}
}



void selectSort(int *a,int len)//选择
{	int min,flag,j;
for(int i=0;i<len;++i)
{
min=a[i];
for(j=i+1;j<len;j++)
{
if(a[j]<min)
{min=a[j];flag=j;}
}
if(min!=a[i])
swap(&a[i],&a[flag]);
}
}



int partition(int *a,int s,int e)//快排
{
int i=s-1;
for(int j=s;j<e;j++)
{
if(a[j]<a[e])
{
i++;
if(a[i]!=a[j])
swap(&a[i],&a[j]);
}
}
i++;
swap(&a[i],&a[e]);
return i;
}

void quicksort(int *a,int s,int e)
{
if(a==NULL||s>=e)
return;
int index=partition(a,s,e);
quicksort(a,s,index-1);
quicksort(a,index+1,e);
}



void merge(int *a,int s,int mid,int e)//归并
{
int *l=new int[e-s+1];
int i=s,j=mid+1,k=0;
while(i<=mid&&j<=e)
{
if(a[i]<a[j])
l[k++]=a[i++];
else
l[k++]=a[j++];
}
while(i<=mid)
l[k++]=a[i++];
while(j<=e)
l[k++]=a[j++];
for(int i=s,k=0;i<=e;k++,i++)
a[i]=l[k];
delete [] l;
}
void mergeSort(int *a,int s,int e)
{
if(s<e)
{
int mid=(s+e)/2;
mergeSort(a,s,mid);
mergeSort(a,mid+1,e);
merge(a,s,mid,e);
}
}



void HeapAjust(int arr[],int n,int len){//堆排
int child = 2*n + 1;//已知arr[]中除了arr[n]外均满足堆定义，arr[n]的左孩子为arr[2*n + 1]
while(child < len){
if(arr[child] < arr[child+1] && (child+1<len)){
child++;
}//判断左右子树的大小，返回较大的孩子
if(arr[n] < arr[child]){//比较待调整结点与较大孩子的大小
swap(arr[n], arr[child]);//小于孩子则交换
n = child;//待调整结点更新为较大孩子
child = 2*n +1;//更新孩子结点
}
else
{ break;}//直至成为堆
}
}
void BuiltHeap(int arr[],int len){
for (int i = (len-1)/2; i >= 0 ; --i) {//最后一个有孩子的结点位置
HeapAjust(arr,i,len);
}
}
void heapSort(int arr[],int len){
BuiltHeap(arr,len);//初始堆
for (int i = len-1; i >0 ; --i) {//从最后一个元素开始对序列调整
swap(arr[0],arr[i]);//交换堆顶元素和堆中最后一个元素
HeapAjust(arr,0,i);//调整堆
}
}*/




int main()
{
	int a1[] = { 2, 8, 7, 3, 5, 9, 1, 4 };
	int a[] = { 8, 7 };
	//insertSort(a1,sizeof(a1)/sizeof(int));
	//bubbleSort(a1,sizeof(a1)/sizeof(int));
	//quicksort(a1,0,sizeof(a1)/sizeof(int)-1);
	//selectSort(a1,sizeof(a1)/sizeof(int));
	shellSort(a1, 4, sizeof(a1) / sizeof(int));

	for (int i = 0; i<sizeof(a1) / sizeof(int); i++)
		cout << a1[i] << " ";
	system("pause");
	return 0;
}

