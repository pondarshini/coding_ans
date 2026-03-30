#include<stdio.h>
int main(){
    printf("Enter thr n value : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf ("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int l=0,r=n-1;
    while(l<r){
        int m=(l+r)/2;
        if(arr[m]<arr[m+1]){
            l=m+1;
        }
        else{
            if(arr[m]>arr[m+1]){
                r=m;
            }
        }
    }
    printf("%d ",arr[l]);
}