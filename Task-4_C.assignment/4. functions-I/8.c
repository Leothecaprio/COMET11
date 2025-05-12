#include <stdio.h>
#include <ctype.h>

int fun_alpha_num(char c) {
    if (isalnum(c)) return 1;
    return 0;
}

int main() {
    char ch = 'A';
    if (fun_alpha_num(ch))
        printf("Character is alphanumeric\n");
    else
        printf("Character is not alphanumeric\n");
    return 0;
}
