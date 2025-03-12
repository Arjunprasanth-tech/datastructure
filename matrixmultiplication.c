#include<stdio.h>
int main()
{
        int i,j,r1,r2,c1,c2;
        printf("enter the no of rows:");
        scanf("%d",&r1);
        printf("enter the no of columns:");
        scanf("%d",&c1);
        printf("enter the no of rows:");
        scanf("%d",&r2);
        printf("enter the no of columns:");
        scanf("%d",&c2);
	int a[r1][c1],b[r2][c2],c[r1][c2];
	printf("enter the numbers:\n");
	for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
        printf("enter the numbers of second array:\n");
        for(i=0;i<r2;i++)
        {
                for(j=0;j<c2;j++)
                {
                        scanf("%d",&b[i][j]);
                }
    	}
	if(c1==r2)
	{
        	for(i=0;i<r1;i++)
        	{
                	for (j=0;j<c2;j++)
                	{
				c[i][j]=0;
                        	for(int k=0;k<c1;k++)
                		{
					c[i][j]+=a[i][k]*b[k][j];
				}
			}
		}
        	printf("the MULTIPLIED array:\n");
        	for(i=0;i<r1;i++)
        	{
			 printf("\n");
                	for(j=0;j<c2;j++)
                	{
                        	printf("%d\t",c[i][j]);
                	}
        		printf("\n");
		}
	}
	else
	{
		printf("ERRORRRRR\n");
	}

        return 0;
}
