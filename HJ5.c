#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int panduan(char a){
    switch(a){
        case '0': return 0;break;
        case '1': return 1;break;
        case '2': return 2;break;
        case '3': return 3;break;
        case '4': return 4;break;
        case '5': return 5;break;
        case '6': return 6;break;
        case '7': return 7;break;
        case '8': return 8;break;
        case '9': return 9;break;
        case 'A': return 10;break;
        case 'B': return 11;break;
        case 'C': return 12;break;
        case 'D': return 13;break;
        case 'E': return 14;break;
        case 'F': return 15;break;
        default : return 0;break;
    }
}

int main(void){
    char str[10];
    int length,num,i;
    while(scanf("%s",&str)!=EOF){
        num=0;
        i=0;
        length=strlen(str)-2;
        do{
            num+=pow(16,length-1)*panduan(*(str+2+i));
            i++;
            length--;
        }while(length!=0);
        printf("%d\n",num);
    }
    return 0;
}