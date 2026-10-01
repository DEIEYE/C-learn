#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;

void ih(node *head,int data) {
    node *new = malloc(sizeof(node));
    new->next = head->next;
    new->data = data;
    head->next = new;
}
void prt(node *head) {
    node *ptr = head->next;
    while (ptr) {
        printf("%d -> ",ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
void fr(node *head) {
    node *ptr = head->next;
    while (ptr) {
        node *temp = ptr;
        ptr = ptr->next;
        free(temp);
    }
    free(head);
}
void rv(node *head){
    node *l,*r,*t;
    l=head;
    r=head->next;
    while (r){
        t=r->next;
        r->next=l;
        l=r;
        r=t;
    }
    head->next->next=NULL;
    head->next=l;
}

int main() {
    node *head=malloc(sizeof(node));
    head->data=0;
    head->next=NULL;
    ih(head,10);
    ih(head,20);
    ih(head,30);
    prt(head);
    rv(head);
    prt(head);
    fr(head);
    return 0;
}