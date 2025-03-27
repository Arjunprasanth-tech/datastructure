#include<stdio.h>
int front=-1,rear=-1,l,queue[100];
int isfull()
{
return(rear+1)%l==front;
}
int isempty()
{
return front==-1;
}
void enqueue()
{
	int data;
	printf("enter the number:");
	scanf("%d",&data);
	if(isfull())
	{
		printf("queue overflow\n");
		return;
	}
	if(front==-1)
	{
		front=0;
	}

	rear=(rear+1)%l;
	queue[rear]=data;
	printf("Element %d inserted \n",data);
}
int dequeue()
{
	if(isempty())
	{
		printf("queue underflow\n");
		return -1;
	}
	int data=queue[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else{
		front=(front+1)%l;
	}
	return data;
}
void display()
{
	if(isempty())
	{
		printf("queue is empty\n");
		return;
	}
	printf("queue elements:");
	int i=front;
	while(i!=rear)
	{
		printf("%d\n",queue[i]);
		i=(i+1)%l;
	}
	printf("%d\n",queue[rear]);
}
int main()
{
	int ch;
	printf("enter the queue size:");
	scanf("%d",&l);
	do
    {
        printf("1 for enqueue\n2 for dequeue\n3 for display\n4 for exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exit\n");
                break;
            default:
                printf("Invalid choice\n");
        }

    } while (ch != 4);
	return 0;
}	
