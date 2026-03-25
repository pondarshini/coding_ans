#include <stdio.h>

int check(char s[]) {
    char st[100];
    int top = -1;

    for (int i = 0; s[i]; i++) {
        if (s[i]=='(' || s[i]=='{' || s[i]=='[')
            st[++top] = s[i];
        else {
            if (top == -1) return 0;
            char t = st[top--];
            if ((s[i]==')' && t!='(') ||
                (s[i]=='}' && t!='{') ||
                (s[i]==']' && t!='['))
                return 0;
        }
    }
    return top == -1;
}

int main() {
    char s[] = "({[]})";

    if (check(s))
        printf("Balanced");
    else
        printf("Not Balanced");

    return 0;
}