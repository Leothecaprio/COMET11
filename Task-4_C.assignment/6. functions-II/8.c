#include <stdio.h>
int fun_alpha_num(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
}

int main() {
    char ch = 'a';
    if (fun_alpha_num(ch))
        printf("%c is alphanumeric.\n", ch);
    else
        printf("%c is not alphanumeric.\n", ch);
    return 0;
}  
