#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char str[100];
    scanf("%s",&str);
    int length = strlen(str);
    for(int num=length-1;num>=0;num--){
        printf("%c",str[num]);
    }
    printf("\n");
    return 0;
}