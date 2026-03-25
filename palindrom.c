#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char str[100];
    int i=0,j;
    fgets(str,100,stdin);
    j=strlen(str)-2;
    while(i<j){
        if(tolower(str[i])!=tolower(str[j])){
            printf("Not Palindrome");
            return 0;
        }
        i++;
        j--;
    }

    printf("Palindrome");
}