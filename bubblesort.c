#include<stdio.h>
void bubblesort(int array[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		int swap=0;
		for(int j=0;j<size-1;j++)
		{
			if(array[j]>array[j+1])
			{
				int  temp;
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
				swap=1;
			}
		}
		if(!swap)
		{
			break;
		}
	}
}
int main()
{
	int n,i,a[100];
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	bubblesort(a,n);
	printf("array after sorting:\n");
	for(int j=0;j<n;j++)
	{
		printf("%d\n",a[j]);
	}
	return 0;
}
