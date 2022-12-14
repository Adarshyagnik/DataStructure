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

struct Node * insertAtFirst(struct Node *head,int data){

    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->next=head;
    ptr->data=data;
    return ptr;

}

struct Node * insertAtIndex(struct Node *head,int data, int index){

    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node * p=head;
    int i=0;

    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;

}

struct Node * insertAtEnd(struct Node *head,int data){

    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node * p=head;
    ptr->data=data;
    int i=0;

    while (p->next!=NULL)
    {
        p=p->next;
        i++;
    }
    
   
    p->next=ptr;
    ptr->next=NULL;
    return head;

}

struct Node * insertafterNode(struct Node *head,struct Node*prevNode,int data){

    struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;

    ptr->next=prevNode->next;
    prevNode->next=ptr;
   
   
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
    printf("Before insertion \n");
    linkedlistTraversal(head);
    //head = insertAtFirst(head,56);
    //head = insertAtIndex(head,56,2);
    //head = insertAtEnd(head,56);
    head = insertafterNode(head,second,56);
    printf("\nAfter insertion\n");
    linkedlistTraversal(head);


    return 0;

    
}
