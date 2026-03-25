#include <stdio.h>
union Data{
    int i;
    float f;
    char str[20];
};

struct Data2{
    int i;
    float f;
    char str[20];
};

int main(){
    printf("Union size = %lu\n",sizeof(union Data));
    printf("Struct size = %lu\n",sizeof(struct Data2));

}