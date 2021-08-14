#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int zhishu(long int a,int i){
    if(a%i==0){
        printf("%d ",i);
        zhishu(a/i,i);
    }
    else if(i>=23){
        //printf("%ld ",a);
        return 0;
    }
    else{
        i+=1;
        zhishu(a,i);
    }
    return 0;
}

int main(void){
    long int input;
    scanf("%ld",&input);
    while(zhishu(input,2)){

    }
    return 0;
}