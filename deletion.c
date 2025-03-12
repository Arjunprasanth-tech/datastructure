#include<stdio.h>
int main()
{
	int a[100],n,num,i,p;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	deletion(&a,n);
	return 0;

}
void deletion(int*x,int n)
{
	int num,i,p;

	printf("enter the posistion of element to delete:");
	scanf("%d",&num);
	p=num-1;
	for(i=p;i<n;i++)
	{
		*(x+i)=*(x+i+1);
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",*(x+i));
	}

}
