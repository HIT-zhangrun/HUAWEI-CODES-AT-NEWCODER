#include <stdio.h>
#include <string.h>

int main(void){
    char str[500];
    char TARGET,target;
    int num=0;
    int point=0;
    gets(str);
    scanf("%c",&target);//先大写后小写
    if(target>='a'){
        TARGET='A'+(target-'a');
    }
    else{
        TARGET=target;
        target='a'+(target-'A');
    }

    do{
        if(*(str+point)==target||*(str+point)==TARGET){
            num++;
        }
        point++;
    }while(*(str+point)!='\0');
    printf("%d\n",num);
    return 0;
}