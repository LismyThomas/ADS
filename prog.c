#include<stdio.h>
#include<stdlib.h>
int a[20], pos,elem;
int n=0;

void display();
void insert();
void del();
void sort();
void search();
void main()

{

 int choice,j,i;
 printf("enter the number of elements\n");
 scanf("%d",&n);
 printf("enter the array elements\n");
 for(i=0;i<n;i++)
    scanf("%d",&a[i]);


    while(1)
                {
                 printf("\n\nMENU ");
                 printf("\n 1. Display of array elements");
                 printf("\n 2. Insert element at a given Position");
                 printf("\n 3. Delete an element from a given Position");
                 printf("\n 4. sort");
                 printf("\n 5. search");
                 printf("\n 6.exit");
                 printf("\nEnter your choice: ");
                 scanf("%d", &choice);
                 switch(choice)
                 {
                  case 1:display();
                          break;
                  case 2:insert();
                          break;
                  case 3:del();
                          break;
                  case 4:sort();
                          break;
                 case 5:search();
                        break;
                  case 6:exit(1);
                          break;

                default:printf("\nPlease enter a valid choice:");
                 }
                }
}
void display()

{

       int i;
        if(n==0)
                {
                printf("\nNo elements to display");
            return;
            }
            printf("\nArray elements are:");
            for(i=0; i<n;i++)
                printf("%d\t",a[i]);

}
void insert()
{
    int i;
    if(n==20)
    {
        printf("\nArray is full. Insertion is not possible");
        return;
        }
            {
                printf("\nEnter position where element to be inserted:    ");
             scanf("%d",&pos);
             }
             printf("\nEnter the value to be inserted:   ");
             scanf("%d",&elem);
             for(i=0;i>=pos-1;i++)
             {
                a[i] = a[i+1];

            }
            a[pos] = elem;
            n = n+1;
            display();

}
void del()
{

          int i;
            if(n==0)
            {
                printf("\nArray is empty and no elements to delete");
                return;
            }
            {
                printf("\nEnter a  position from where element to be deleted:");
                scanf("%d",&pos);
            }
            elem = a[pos];
            printf("\nDeleted element is%d\n",elem);
            for(i=pos;i<n-1;i++)
            {
                a[i]=a[i+1];
            }
            n=n-1;
            display();
}
void sort()
{
    int i,j,k;
     for (i=0;i<n;++i)
        {
            for (j=i+1;j<n;++j)
            {
                if(a[i]>a[j])
                {
                    k=a[i];
                    a[i]=a[j];
                    a[j]=k;
                }
            }
}
display();
}
void search()
{

    int n,i;
    printf("enter the element to be searched\n");
    scanf("%d",&n);
    printf("Elements Found at : ");
    for(i=0;i<n;i++)
    {       if(n==a[i])
        printf("%d ",i+1);
    }
}
