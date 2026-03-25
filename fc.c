/*function pointer arithmetic*/
#include <stdio.h>
int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int main(){
    int (*fp)(int,int);
    fp = add;
    printf("%d\n",fp(5,3));
    fp = sub;
    printf("%d",fp(5,3));
}