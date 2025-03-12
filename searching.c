#include<stdio.h>
int search(int*a,int key,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			return 1;
		}
	}
	return -1;
}
int main()
{
	int a[100],n,i,num;
	printf("enter the number of element:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to search:");
	scanf("%d",&num);
	i=search(&a[0],num,n);
	if(i==1)
        {
                printf("number found\n");
        }
        else
        {
                printf("number not found\n");
        }
}
