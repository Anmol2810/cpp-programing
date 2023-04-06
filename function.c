#include<stdio.h>
int main(){
    char f[3];
    printf("enter name:");
    scanf("%s",&f);
    sayhi(f, 34);
    sayhi("duke", 41);
    sayhi("jai", 22); 
    return 0;
}

void sayhi(char name[], int age){
    printf("hi %s\tyour age is %d\n", name, age);
}