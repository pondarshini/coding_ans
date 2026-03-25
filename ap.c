#include <stdio.h>
#include <math.h>
int armstrong(int n){
    int sum = 0, temp = n, r, d = 0, t;
    t = n;
    while(t){
        d++;
        t /= 10;
    }
    while(temp){
        r = temp % 10;
        sum += pow(r, d);
        temp /= 10;
    }

    return sum == n;
}

int perfect(int n){
    int sum = 0, i;
    for(i = 1; i <= n/2; i++){
        if(n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main(){
    int n;
    scanf("%d", &n);
    if(armstrong(n))
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    if(perfect(n))
        printf("Perfect\n");
    else
        printf("Not Perfect\n");

    return 0;
}