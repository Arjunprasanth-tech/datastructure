#include<stdio.h>
#define srow 100
#define mrow 20
#define mcolumn 20
int main()
{
	int mat[mrow][mcolumn],sparse[srow][3];
	int i,j,nzero=0,mr,mc,sr,s;
	printf("enter the number of row:");
	scanf("%d",&mr);
	printf("enter the number of columns:");
	scanf("%d",&mc);
	for(i=0;i<mr;i++)
	{
		for(j=0;j<mc;j++)
		{
			printf("enter the number of row %d ,column %d: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<mr;i++)
	{
		for(j=0;j<mc;j++)
		{
			printf("%6d",mat[i][j]);
		}
		if(mat[i][j]!=0)
		{
			nzero ++;
		}
		printf("\n");
	}
	sr=nzero+1;
	sparse[0][0]=mr;
	sparse[0][1]=mc;
	sparse[0][2]=nzero;
	s=1;
	for(i=0;i<mr;i++)
	{
		for(j=0;j<mc;j++)
		{
			if(mat[i][j]!=0)
			{
				sparse[s][0]=i;
				sparse[s][1]=j;
				sparse[s][2]=mat[i][j];
				s++;
			}
		}
	}
	printf("sparse matrix is\n");
	for(i=0;i<sr;i++)
		{
			printf("%4d %6d %5d",sparse[i][0],sparse[i][1],sparse[i][2]);
		}
		printf("\n");

}
	


