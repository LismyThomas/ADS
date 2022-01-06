#include <stdio.h>
int stack[100],top,i,n;
void main()
{
    void pop();
    void push();
    void display();
    void peek();
    void exit();
    int choice,i;
    top=-1;
    printf("\n Enter the size of stack: ");
    scanf("%d",&n);
    printf("\n Enter the elements of stack: ");
    for(i=0;i<n;i++)
       {
           top=top+1;
           scanf("%d",&stack[i]);
       }
    do
    {
        printf("\n 1.Display  2.Pop  3.Push  4.Peek   5.Exit");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\nDISPLAY\n");
                    display();
                    break;
            case 2:printf("\nPOP\n");
                    pop();
                    break;
            case 3:printf("\n PUSH\n");
                    push();
                    break;
            case 4:printf("\n PEEK\n");
                    peek();
                    break;
            case 5:printf("\n EXIT\n");
                    exit(1);
            default:printf("\n Wrong choice");


        }
    }while(choice<=5);
}

void display()
{
    if(top<0)
    {
        printf("\n Stack is empty");
    }
    else
    {
        for(i=top;i>-1;i--)
        {
            printf("%d,",stack[i]);
        }
    }
}
void peek()
{
    int data;
    data=stack[top];
    printf("\n %d",data);

}
void push()
{
    int data;
    printf("enter data to be inserted: ");
    scanf("%d",&data);
    if(top==n-1)
    {
        printf("could not print stack full");
    }
    else
    {
        top=top+1;
        stack[top]=data;

    }
}
void pop()
{
    if(top==-1)
    {
         printf("could not delete stack empty");

    }

    else
    {
        printf("Popped element: %d",stack[top]);
        top=top-1;
    }
}

