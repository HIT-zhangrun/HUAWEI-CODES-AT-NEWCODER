#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char buf[50];
void Little(char *a,int remain){
    int i;
    strcpy(buf,a);
    for(i=remain;i<8;i++){
         *(buf+i)='0';
        }
    *(buf+8)='\0';
    puts(buf);
}

void Large(char *a){
    int i;
    strcpy(buf,a);
    *(buf+8)='\0';
    puts(buf);
}

int main(void){
    char str[100];
    int length=0,pass=0;
    while(scanf("%s",str)==1){
        pass=0;
        length=strlen(str);
        do{
            if(length<=8){
                Little(str+pass,length);
                break;
            }
            else{
                Large(str+pass);
            }
            pass+=8;
            length-=8;
        }while(1);
    }
    return 0;
}
