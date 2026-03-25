/*Average using pointer arithmetic */
#include <stdio.h>
int main(){
    int arr[5],i;
    int *p=arr;
    float sum=0;
    for(i=0;i<5;i++)
        scanf("%d",p+i);
    for(i=0;i<5;i++)
        sum+=*(p+i);
    printf("Average=%.2f",sum/5);
}
