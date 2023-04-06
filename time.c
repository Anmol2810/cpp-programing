#include<stdio.h>
int a, b, c;
int main(){
    printf("enter three no. :");
    scanf("%d%d%d",&a, &b, &c);
    if (c>b)
    {
        printf("%d is the largest",c);
    }
    else if (b>a)
    {
        printf("%d is the largest",b);
    }
    else{
        printf("%d is the largest",a);
    }
    
}