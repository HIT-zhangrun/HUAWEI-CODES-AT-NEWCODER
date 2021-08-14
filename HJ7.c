#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    float num;
    float remain;
    int inter;
    scanf("%f",&num);
    inter=(int)num;
    remain=num-inter;
    if(remain>=0.5){
    printf("%d\n",inter+1);
    }
    else{
    printf("%d\n",inter);
    }
    return 0;
}