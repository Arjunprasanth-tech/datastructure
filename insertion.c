#include<stdio.h>
int main()
{
        int a[100],n,num,number,p,i,op;
	void insertion(int a[],int );
        void deletion(int a[],int );
        void traversal(int a[],int );
	void merging(int a[],int );
        printf("enter  the number of elements:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
	printf("enter the operation:");
	scanf("%d",&op);
	switch(op)
	{
		case 1:insertion(&a,n);
			break;
        	case 2:deletion(&a,n);
			break;
		case 3:traversal(&a,n);
			break;
		case 4:merging(&a,n);
			break;
	}
        return 0;
}

void insertion(int *x,int n)
{
	int p,num,number,i;
	printf("enter the position to insert:");
	scanf("%d",&num);
	p=num-1;
	printf("enter the element to insert:");
	scanf("%d",&number);
	for(i=n;i>p;i--)
	{
		*(x+i)=*(x+i-1);
	}
	*(x+i)=number;
	printf("new arrays:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\n",*(x+i));
	}

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
	printf("new arrays:\n");
        for(i=0;i<n-1;i++)
        {
                printf("%d\n",*(x+i));
        }

}
void traversal(int *x,int n)
{
	int i;
	printf("traversal is: \n");
	for(i=0;i<n;i++)
        {
                printf("%d\n",*(x+i));
        }
}
void merging(int*x,int n)
{
	int b[100],n2,num,i,j,c[100];
	printf("enter the second array:");
	scanf("%d",&n2);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=n;i++)
        {
                c[i]=*x+i;
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
