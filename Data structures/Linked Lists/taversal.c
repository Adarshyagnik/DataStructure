#include<stdio.h>
#include<stdlib.h>




struct Node
{
    int data;
    struct Node * next;
    
    
};


void linkedlistTraversal(struct Node * ptr){
    while(ptr!=NULL){
    printf("Element: %d\n",ptr->data);
    ptr=ptr->next;
    }
}


int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    //allocate memory for nodes in the linked list in heap with the help of malloc
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    
    //link first and second node

    head->data=7;
    head->next=second;
    
    //link second and third node
    second->data=17;
    second->next=third;

    //link third and fourth node
    third->data=25;
    third->next=fourth;
    
    //terminate the node --link fourth and null node
    fourth->data=33;
    fourth->next=NULL;

    linkedlistTraversal(head);

    return 0;

    
}
