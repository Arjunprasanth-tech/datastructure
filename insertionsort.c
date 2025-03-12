#include<stdio.h>
void insertionsort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int j;
		int key=arr[i];
		 j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}
void printarray(int arr[],int n)
{
	printf("sorted array:");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
int main()
{
	int arr[100],n,i;
	printf("enter the no of elements in  the array:");
	scanf("%d",&n);
	printf("enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	insertionsort(arr,n);
	printarray(arr,n);
	return 0;
}
