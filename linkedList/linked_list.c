#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int number;
    struct node* next;
}node;

int main(){
    node* list = NULL; //HEAD
    
    node* head = NULL;
    node* temp = NULL;
    
    node* curr = head;

    int tam,cont;
    printf("ingrese tamaño de la lista: \n");
    scanf("%d",&tam);

    for(int i=0;i<tam;i++){
        temp = malloc(sizeof(node));
        scanf("%d",&temp->number);
        temp->next=NULL;
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

