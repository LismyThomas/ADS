
#include<stdio.h>
void enqueue();
void dequeue();
void display();
int isfull();
int isempty();
int front=-1;
int rear=-1;
int size,x,items[50],i;
void main()
{
    int ch;
    printf("\nEnter the size of the CIRCULAR QUEUE:");
    scanf("%d",&size);
    do
    {
        printf("\nEnter the operations:\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:enqueue();
               break;
        case 2:dequeue();
               break;
        case 3:display();
               break;
        default:printf("\nInvalid operation.");
                break;
        }
    }
    while(ch<4);
}
void enqueue()
{

    if(isfull())
    {
        printf("\n queue is full");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear=(rear+1)% size;
        printf("\n Insert the element: ");
        scanf("%d",&x);
        items[rear]=x;
        printf("\n the element inserted is %d",x);
    }
}
void dequeue()
{

        if(isempty())
        {
            printf("\n queue is empty");

        }
        else
        {
        x=items[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%size;
        }
        printf("\n deleted element is %d",x);
        }

}
void display()
{
  int i;
  if (isempty())
    printf(" \n Empty Queue\n");
  else {
    for (i = front; i != rear; i = (i + 1) % size) {
      printf("%d ", items[i]);
    }
    printf("%d ", items[i]);
  }
}
int isfull()
    {
        if((front==rear+1)||(front==0&&rear==size-1))
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
        if(front==-1)
            return 1;
        else
            return 0;
    }
