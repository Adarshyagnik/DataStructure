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

//Case 1:deletion the first element from the linked list
struct Node * deleteFirst(struct Node*head){
    struct Node * ptr=head;
    head=head->next;
    free(ptr);
    return head;
} 

//Case 2:deletion of element from the index
struct Node * deleteAtIndex(struct Node*head,int index){
    struct Node*p=head;
    struct Node*q=head->next;
    for(int i=0; i<index-1;i++){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}




//Case 3:deletion the last element from the linked list
struct Node * deleteLast(struct Node*head){
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    return head;
} 

//Case 4:deleting the element from given value
struct Node * deleteValue(struct Node*head,int value){
    struct Node*p=head;
    struct Node*q=head->next;
    while(q->data!=value && q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    if(q->data==value){
        p->next=q->next;
        free(q);
    }
    return head;
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

    head->data=4;
    head->next=second;
    
    //link second and third node
    second->data=3;
    second->next=third;

    //link third and fourth node
    third->data=8;
    third->next=fourth;
    
    //terminate the node --link fourth and null node
    fourth->data=1;
    fourth->next=NULL;

    printf("linked list before deletion\n");
    linkedlistTraversal(head);
    
    //head=deleteFirst(head);   //deleting first element
    //head=deleteAtIndex(head,1);
    //head=deleteLast(head);
    head=deleteValue(head,8);
    printf("linked list after deletion\n");
    linkedlistTraversal(head);

    return 0;

    
}
