#include <stdio.h>
int main(){
    int n,i;
    long long fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        fact*=i;
    printf("%lld",fact);
    return 0;
}
/*---------------------------------------------------------------------------------------------------------*/
#include <stdio.h>
int fib(int n){
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%d ",fib(i));
}