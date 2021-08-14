#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NUM{
    int num;
    struct NUM *next;
};

void getnum(struct NUM **head){
    struct NUM *a,*temp,*point,*prepoint;
    a=(struct NUM*)malloc(sizeof(struct NUM));
    
    scanf("%d",&(a->num));
    if(*head==NULL){
        a->next=NULL;
        *head=a;
    }
    else{
        point=*head;
        if(point->num>a->num){
                temp=*head;
                *head=a;
                a->next=temp;
            }
        else if(point->num==a->num){
            
        }
        else{
            do{
            prepoint=point;
            point=point->next;
            if(point==NULL){
                if((prepoint->num)==(a->num)){
                    break;
                }
                else{
                    prepoint->next=a;
                    a->next=NULL;
                    break;
                }

            }
            else{
                if((point->num)==(a->num)){
                    break;
                }
                if(((point->num)>(a->num))&&((prepoint->num)<(a->num))){
                    temp=prepoint->next;
                    prepoint->next=a;
                    a->next=temp;
                    break;
                }
                
            }
            }while(1);
        }
        
         
    }
}

void release(struct NUM **num){
    struct NUM *temp;
    while(*num!=NULL){
        temp=*num;
        *num=(*num)->next;
        free(temp);
        
    } 
}

void printnum(struct NUM *head){
    struct NUM *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->num);
        temp=temp->next;
    }
}

int main(void){
    int i=0,ch=0;
    while(~scanf("%d",&ch)){
        struct NUM *head=NULL;
        i=0;
        do{
            getnum(&head);
            i++;
        }while(ch!=i);
        printnum(head);
        release(&head);
    }
    return 0;
}