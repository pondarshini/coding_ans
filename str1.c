
/*Read string with spaces and length without strlen*/
#include <stdio.h>
int main(){
    char str[100];
    int len=0;
    fgets(str,100,stdin);
    while(str[len]!='\0')
        len++;

    printf("Length=%d",len-1);
}