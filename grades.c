#include<stdio.h>
int main(){
    char grade;
    printf("enter your grade :");
    scanf("%c\n", &grade);
    switch(grade){
    case 'A':
        printf("you did great");
        break;
    case 'B':
        printf("good");
        break;
    case 'C':
        printf("study hard");
        break;
    case 'D':
        printf("bhai tu kya krr rha hai");
        break;
    case 'E':
        printf("kya matlab sabke kam number aaye");
        break;
    case 'F':
        printf("yeh sab doglapan hai");
        break;
    default :
        printf("shi shi grade daal gawar");
    }
    return 0;
}
