#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char str1[1000],str2[1000];
    scanf("%s",&str1);
    int length;
    length=strlen(str1);
    int i,k=0;
    for(i=0;i<length;i++){
        if(str1[i]>=0&&str1[i]<=127){
            *(str2+k)=*(str1+i);
            
             for(int j=0;j<k;j++){
                if(*(str2+j)==*(str2+k)){
                k--;
                break;
                }
            
            }
            k++;
            str2[k]='\0';
        }
    }
    printf("%s",str2);
    printf("%d\n",strlen(str2));
    return 0;
}