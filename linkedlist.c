#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

int print_data(struct node* head);

int main(){
    
    printf("size of element%d\n",sizeof(struct node));
    struct node *head = malloc(sizeof(struct node));
    head ->data = 20;
    head ->link =NULL;
    
    struct node *ptr  = malloc(sizeof(struct node));
    ptr ->data = 10;
    ptr ->link  = NULL;
    
    head->link  = ptr;
    
    ptr = malloc(sizeof(struct node));
    
    ptr->data= 30;
    ptr->link = NULL;

    struct node *ptr1 = malloc(sizeof(struct node));
    
    ptr1->data= 40;
    ptr1->link = NULL;
    
    head->link->link->link = ptr;
    
    
    print_data(head);
    
    return 0;
}
int print_data(struct node* head){
    if (head == NULL) {
        printf("linked list is empty");
    }
    struct node *ptr = malloc(sizeof(struct node));
    ptr = head;
    while (ptr !=NULL) {
        printf("%d\n",ptr->data);
        ptr  = ptr->link;
    }
    return 0;
    
}