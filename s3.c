
/*Lowercase to Uppercase without toupper*/
#include <stdio.h>
int main(){
    char str[100];
    int i;
    fgets(str,100,stdin);
    for(i=0;str[i];i++){
        if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
    }

    printf("%s",str);
}