
#include<stdio.h>
void enqueue();
void dequeue();
void display();
int isfull();
int isempty();
int rear=-1;
int front=-1;
int i,queue[40],data,n;
void main()
{
    int ch;
    printf("\nEnter the size of the array:");
    scanf("%d",&n);
    do{
    printf("\nArray Implementations.");
    printf("\n 1.Enqueue \n 2.Dequeue \n 3.Display");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:enqueue();
               break;
        case 2:dequeue();
               break;
        case 3:display();
               break;
        default:printf("\nInvalid choice");
                break;
    }
}while(ch<4);
}
void enqueue()
{
    if(isfull())
    {
      printf("\nQueue is full");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        printf("\nInsert the element: ");
        scanf("%d",&data);
        rear=rear+1;
            queue[rear]=data;
            printf("\n the element inserted is %d",data);
    }

}
void dequeue()
{
    if(isempty())
        printf("\nQueue is empty");
    int data=queue[front];
    front=front+1;
        printf("\nDeleted element is:%d",data);
    }
void display()
{
    if(isempty())
    {
        printf("\nQueue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d",queue[i]);
        }
    }
}
int isfull()
{
    if(rear==n-1)
    {
            return 1;
    }
    else
    {
          return 0;
    }
}
int isempty()
{
    if(front<0 || front>rear)
        return 1;
    else
        return 0;
}
