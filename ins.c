#include<stdio.h>
void insertion(int a[],int n)
{
	int p,num,number,i;
	printf("enter the position to insert:");
	scanf("%d",&num);
	p=num-1;
	printf("enter the element to insert:");
	scanf("%d",&number);
	for(i=n;i>p;i--)
	{
		a[i]=a[i-1];
	}
	a[i]=number;
	printf("new arrays:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}

}
void deletion(int a[],int n)
{
        int num,i,p;
	 //n=sizeof(a)/sizeof(a[0]);
        printf("enter the posistion of element to delete:");
        scanf("%d",&num);
        p=num-1;
        for(i=p;i<n;i++)
        {
                a[i]=a[i+1];
        }
	printf("new arrays:\n");
        for(i=0;i<=n-1;i++)
        {
                printf("%d\n",a[i]);
        }
	n--;

}
void traversal(int a[],int n)
{
	int i;
	 //n=sizeof(a)/sizeof(a[0]);
	printf("traversal is: \n");
	for(i=0;i<n;i++)
        {
                printf("%d\n",a[i]);
        }
}
void merging(int a[],int n)
{
	int b[100],n2,num,i,j,c[100];
	 //n=sizeof(a)/sizeof(a[0]);
	printf("enter no of elements in  the second array:");
	scanf("%d",&n2);
	printf("enter the array\n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=n;i++)
        {
                c[i]=a[i];
        }
        for(i=n;i<n+n2;i++)
        {
                c[i]=b[i-n];
        }
        printf("the merged array:");
        for(i=0;i<n+n2;i++)
        {
                printf("%d\n",c[i]);
        }
}
int main()
{
	int a[100],n,num,number,p,i,op;
        printf("enter  the number of elements:");
        scanf("%d",&n);
	printf("enter the array\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
	do
	{
		printf("enter the operation:\n 1-insertion\n 2-deletion\n 3-traversal\n 4-merging\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:insertion(a,n);
				break;
        		case 2:deletion(a,n);
				break;
			case 3:traversal(a,n);
				break;
			case 4:merging(a,n);
				break;
		}
	}
	while(op<5);
        return 0;
}
