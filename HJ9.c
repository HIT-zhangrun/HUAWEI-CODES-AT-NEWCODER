#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char num[100],str[100];
    scanf("%s",&num);
    int length=strlen(num);
    int i,k=0;
    for(i=0;i<length+1;i++){
        *(str+k)=*(num+length-1-i);
        for(int j=0;j<k;j++){
            if(*(str+j)==*(str+k)){
                k--;
                break;
            }
        }
        k++;
    }
    printf("%s",str);
    return 0;
}