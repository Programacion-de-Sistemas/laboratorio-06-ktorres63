#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int number;
    struct node* next;
}node;

int main(){
    int tam,cont;
    node* list = NULL; //HEAD
    node* head = NULL;
    node* curr = head;
    head = malloc(sizeof(node));

    printf("ingrese tamaño de la lista: \n");
    scanf("%d",&tam);

    while(curr!=NULL){
        scanf("%d",curr->number);
        curr = curr->next;

    }

/*
    node* n = malloc(sizeof(node));
    if(n==NULL)
        return 1;
    n->number=45;
    n->next=NULL;

    node* n_2 = malloc(sizeof(node));
    if(n_2==NULL)
        return 1;

    n_2->number = 15;
    n_2->next =NULL;

    n->next=n_2;
*/


    //list=n;

    //IMPRIMIR
    for(node* tmp = head;tmp!=NULL;tmp=tmp->next)
        printf("%i\n",tmp->number);

    //FUNCION FREE BUENA PRACTICA EN PROGRAMACION
    while(head!=NULL){
        node* tmp = head->next;
        free(head);
        head=tmp;
    }
    return 0;
}

