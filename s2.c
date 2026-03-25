/*Remove character from string*/
#include <stdio.h>
int main(){
    char str[100],ch;
    int i,j=0;
    fgets(str,100,stdin);
    scanf(" %c",&ch);
    for(i=0;str[i];i++){
        if(str[i]!=ch)
            str[j++]=str[i];
    }

    str[j]='\0';
    printf("%s",str);
}