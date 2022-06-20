#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int number;
    struct node* next;
}node;

int main(){
    node* head = NULL;
    node* temp = NULL;

    node* curr = head;

    int tam;
    printf("ingrese tamaño de la lista: \n");
    scanf("%d",&tam);

    for(int i=0;i<tam;i++){
        temp = malloc(sizeof(node));
        temp->number=i;
        temp->next=NULL;

        if(head==NULL){
            head=temp;
            curr=head;
        }
        else{
            curr->next=temp;
            curr=temp;
        }
    }
    curr= head;


    //IMPRIMIR
    for(node* tmp = head;tmp!=NULL;tmp=tmp->next)
        printf("imprimiendo: %i\n",tmp->number);

    //FUNCION FREE BUENA PRACTICA EN PROGRAMACION
    while(head!=NULL){
        node* tmp = head->next;
        free(head);
        head=tmp;
    }
    return 0;
}
