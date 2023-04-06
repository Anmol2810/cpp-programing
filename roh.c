#include<stdio.h>
#include<conio.h>
void main()
{/*
    int n,i;
    printf("Enter no. of values you want to enter : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter value %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array : ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    int sum=0,avg;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("\nSum of array elements : %d",sum);
    avg=sum/n;
    printf ("\nAverage : %d",avg);
    int l=0,sl=0,s=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>=l)
        {
            l=arr[i];
        }
        if(arr[i]<=s)
        {
            s=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=sl && arr[i]!=l)
        {
            sl=arr[i];
        }
    }
    printf("\nLargest no. : %d",l);
    printf("\nSecond largest no. : %d",sl);
    printf("\nSmallest no. : %d",s);
    */
    
    int ar[10],a,b,i,c;
    for(i=0;i<5;i++)
    {
        printf("Enter value %d : ",i+1);
        scanf("%d",&ar[i]);
    }
    printf("Array : ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",ar[i]);
    }
    printf("\nEnter index where you want to insert : ");
    scanf("%d",&a);
    printf("Enter value of the element : ");
    scanf("%d",&b);
    for(i=5;i>=a;i--)
    {
        ar[i+1]=ar[i];
    }
    ar[a]=b;
    printf("Array after insertion : ");
    for(i=0;i<6;i++)
    {
        printf("%d\t",ar[i]);
    }
    printf("\nEnter index from where you want to delete : ");
    scanf("%d",&c);
    for(i=c;i<5;i++)
    {
        ar[i]=ar[i+1];
    }
    printf("Array after deletion : ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",ar[i]);
    }
}