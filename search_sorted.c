#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the number of ele: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter ele: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Enter the key: ");
    scanf("%d",&key);
    int result = search(arr,n,key);
    if(result!=-1){
        printf("Key found at index : %d",result);
    }
    else{
        printf("Key not found");
    }
    return 0;


}
int search(int arr[],int n,int key){

    int l,h,m;
    l=0,h=n-1;
    
    while(l<=h){
        m = (l+h)/2;
        if(arr[m]==key){
            return m;
        }
        if(arr[l]<=arr[m]){
            if(key<arr[m]&&key>=arr[l]){
                h=m-1;
            }
            else{
                l=m+1;
            }
        }
        else{
            if(key>arr[m]&&key<=arr[h]){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }

    }
    return -1;
   
    
    
    

}