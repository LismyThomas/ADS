#include<stdio.h>
int a[50],i,j,n,k,pos,t;
void main()
{
void insert_beg();
void insert_mid();
void insert_end();
void delete_beg();
void delete_mid();
void delete_end();
void sort();
void search();
void display();
int ch;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("\n Enter the elements to the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n MENU DRIVEN \n");
      printf("\n 1.To insert an element at the beginning.");
      printf("\n 2.To insert an element at middle.");
      printf("\n 3.To insert an element at the end");
      printf("\n 4.To delete an element at the beginning.");
      printf("\n 5.To delete an element at middle.");
      printf("\n 6.To delete an element at the end");
      printf("\n 7.To display the elements.");
      printf("\n 8.To sort an array.");
      printf("\n 9.To search an element.");
    do
    {

      printf("\n Enter your choice:");
      scanf("%d",&ch);
    switch(ch)
    {
        case 1:insert_beg();
               break;
        case 2:insert_mid();
               break;
        case 3:insert_end();
               break;
        case 4:delete_beg();
               break;
        case 5:delete_mid();
               break;
        case 6:delete_end();
               break;
        case 7:display();
               break;
        case 8:sort();
               break;
        case 9:search();
               break;
        default:printf("\nInvalid choice.");
    }
}
    while(ch<10);
}
void insert_beg()
{
    printf("\n Enter the element to be inserted at the beginning.");
    scanf("%d",&k);
    for(i=n;i>=0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=k;
    n=n+1;
}
void insert_mid()
{
    printf("\nEnter the element to be inserted at middle.");
    scanf("%d",&k);
    printf("\nEnter the position of element:");
    scanf("%d",&pos);
        for(i=n;i>=pos;i--)
        {
            a[i]=a[i-1];
        }
        a[pos-1]=k;
        n=n+1;
}
void insert_end()
{
    printf("\n Enter the element to be inserted:");
    scanf("%d",&k);
    a[n]=k;
    n=n+1;
}
void delete_beg()
{
for(i=1;i<n;i++)
{
a[i-1]=a[i];
}
n=n-1;
printf("Element deleted successfully");
}
void delete_mid()
{
    printf("Enter the position: ");
    scanf("%d",&pos);
    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("\nElement deleted successfully.");
    n=n-1;
}
void delete_end()
{
if(n==0)
{
printf("\nArray is empty");
}
else
{
n=n-1;
printf("\nElement deleted successfully");
}
}
void display()
{
int i;
    if(n>0)
    {
        printf("\nArray elements are: ");
        for(i=0; i<n;i++)
        printf("%d\t ", a[i]);

    }
    else
    {
        printf("\nNo elements to display");
    }
}
void sort()
{
   for(i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\nElements sorted successfully");
}
void search()
{
    printf("\nArray Searching");
    printf("\nEnter Element to be searched : ");
    scanf("%d",&k);
    printf("Elements Found at : ");
    for(i=0;i<n;i++)
    {       if(k==a[i])
        printf("%d ",i+1);
    }
}

