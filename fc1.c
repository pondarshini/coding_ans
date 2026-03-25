#include <stdio.h>
int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int divi(int a,int b){return a/b;}
int main(){
    int (*op[4])(int,int) = {add,sub,mul,divi};
    int a,b,choice;
    scanf("%d%d",&a,&b);
    scanf("%d",&choice);
    printf("%d",op[choice](a,b));
}