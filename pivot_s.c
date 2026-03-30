#include<stdio.h>
int search(int arr[],int n, int key){
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]==key){
            return m;
        }
        else{
            if(arr[l]<=arr[m]){
                if(key>=arr[l]&&key<=arr[m]){
                    r=m-1;
                }
                else{
                    l=m+1;
                }

            }else{
                if(key>arr[m]&&key<=arr[r]){
                    l=m+1;
                }
                else{
                    r=m-1;
                }
            }
        }
    }
    return -1;
}
int main(){
    int n,key;
    printf("Enter n value: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter key: ");
    scanf("%d",&key);
    printf("%d\n", search(arr,n,key));
    return 0;

}