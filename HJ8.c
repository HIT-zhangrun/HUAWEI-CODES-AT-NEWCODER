#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    int ch;
    int buf[1000]={0};
    int pos,num,i;
    scanf("%d",&ch);
    do{
        scanf("%d %d",&pos,&num);
        buf[pos]+=num;
        ch--;
    }while(ch!=0);
    for(i=0;i<1000;i++){
        if(buf[i]!=0){
            printf("%d %d\n",i,buf[i]);
        }
    }
    return 0;
}