#include<stdio.h>
int main()
{
        int a[100][100],b[100][100],i,j,r1,r2,c1,c2,c[100][100];
        printf("enter the no of rows:");
        scanf("%d",&r1);
        printf("enter the no of columns:");
        scanf("%d",&c1);
        printf("enter the numbers:\n");
        for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
        r2=r1;
        c2=c1;
        printf("enter the numbers of second array:\n");
        for(i=0;i<r2;i++)
        {
                for(j=0;j<c2;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
        for(i=0;i<r1;i++)
        {
                for (j=0;j<c1;j++)
                {
                        c[i][j]=a[i][j]-b[i][j];
                }
        }
        printf("the substracted array:\n");
        for(i=0;i<r1;i++)
        {
		 printf("\n");
                for(j=0;j<c1;j++)
                {
                        printf("%d\t",c[i][j]);
                }
        }
        printf("\n");
        return 0;
}

