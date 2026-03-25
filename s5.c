/*substr index*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[100],sub[50];
    int i,j;
    gets(str);
    gets(sub);
    for(i=0;str[i];i++){
        for(j=0;sub[j];j++){
            if(str[i+j]!=sub[j])
                break;
        }
        if(sub[j]=='\0'){
            printf("Index=%d",i);
            return 0;
        }
    }

    printf("Not Found");
}