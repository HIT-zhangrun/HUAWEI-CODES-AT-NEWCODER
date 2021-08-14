#include <stdio.h>
#include <string.h>

int main(void){
    char str[5000];
    int point=0,length;
    int num=0;
    gets(str);
    do{
        point++;
    }while(*(str+point)!='\0');
    length=point;
    do{
        point--;
        num++;
        if(num>length){
            num=length+1;
            break;
        }
    }while(*(str+point)!=' ');
    printf("%d",num-1);
    return 0;
}