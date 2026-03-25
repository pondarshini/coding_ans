#include <stdio.h>
struct Student{
    int roll;
    char name[50];
    float marks;
};
int main(){

    struct Student s[5];
    int i,top=0;
    for(i=0;i<5;i++){
        scanf("%d%s%f",&s[i].roll,s[i].name,&s[i].marks);
    }
    for(i=1;i<5;i++){
        if(s[i].marks>s[top].marks)
            top=i;
    }
    printf("Topper: %s %f",s[top].name,s[top].marks);
}