#include <stdio.h>
enum Status {PENDING,SHIPPED,DELIVERED};
int main(){
    enum Status order;
    order = SHIPPED;
    if(order==PENDING)
        printf("Pending");
    else if(order==SHIPPED)
        printf("Shipped");
    else
        printf("Delivered");
}