#include <stdio.h>
#define MAX 100

char st[MAX];
int top = -1;

void push(char c){ st[++top] = c; }
char pop(){ return st[top--]; }

int match(char a, char b) {
    return (a=='('&&b==')') || (a=='{'&&b=='}') || (a=='['&&b==']');
}

int main() {
    char exp[] = "{[()]]";

    for (int i = 0; exp[i]; i++) {
        if (exp[i]=='('||exp[i]=='{'||exp[i]=='[')
            push(exp[i]);
        else {
            if (top == -1 || !match(pop(), exp[i])) {
                printf("Not balanced\n");
                return 0;
            }
        }
    }

    printf(top == -1 ? "Balanced\n" : "Not balanced\n");
    return 0;
}