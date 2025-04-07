#include<stdio.h>
void fib(int n,int prev1,int prev2)
{
	if(n<3)
	{
		return;
	}
	else
	{
		int num=prev1+prev2;
		printf(" %d" ,num);
		return fib(n-1,prev2,num);
	}
}
	void printfib(int n)
	{
		if(n<1)
		{
			printf("invalid number of item");
		}
		else if(n==1)
		{	
			printf("%d",0);
		}
		else if(n==2)
		{
			printf("%d %d",0,1);
		}
		else
		{
			printf("%d %d",0,1);
			fib(n,0,1);
		}
	}
	int main()
	{
		int n;
		printf("enter the number of items:");
		scanf("%d",&n);
		printfib(n);
		return 0;
	}

