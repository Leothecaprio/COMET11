// //for loop
// #include <stdio.h>

// int main() {
//     int i, j, x, y;

//     y = 3;  
//     for (i = 0; i < y; i++) {
//         x = 10;  
//         for (j = 0; j < x; j++) {
//             printf(" ");
//         }
//         for (j = 0; j <= i; j++) {
//             if (j == 0)
//                 printf("*");
//             else
//                 printf(" *");
//         }
//         printf("\n");
//     }

//     for (i = 0; i < 2; i++) {
//         for (j = 0; j < 10; j++) {
//             if (i == 0) {
//                 if (j < 3)
//                     printf(" ");
//                 else if (j % 2 == 1)
//                     printf("*");
//                 else
//                     printf(" ");
//             } else {
//                 if (j < 1)
//                     printf(" ");
//                 else if (j % 2 == 1)
//                     printf("*");
//                 else
//                     printf(" ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }


//while loop
// #include <stdio.h>

// int main() {
//     int i = 0, j, x, y;

//     y = 3;
//     while (i < y) {
//         x = 10;
//         j = 0;
//         while (j < x) {
//             printf(" ");
//             j++;
//         }

//         j = 0;
//         while (j <= i) {
//             if (j == 0)
//                 printf("*");
//             else
//                 printf(" *");
//             j++;
//         }

//         printf("\n");
//         i++;
//     }

//     i = 0;
//     while (i < 2) {
//         j = 0;
//         while (j < 10) {
//             if (i == 0) {
//                 if (j < 3)
//                     printf(" ");
//                 else if (j % 2 == 1)
//                     printf("*");
//                 else
//                     printf(" ");
//             } else {
//                 if (j < 1)
//                     printf(" ");
//                 else if (j % 2 == 1)
//                     printf("*");
//                 else
//                     printf(" ");
//             }
//             j++;
//         }
//         printf("\n");
//         i++;
//     }

//     return 0;
// }

//do-while loop
#include <stdio.h>

int main() {
    int i = 0, j, x, y;

    y = 3;
    do {
        x = 10;
        j = 0;
        do {
            printf(" ");
            j++;
        } while (j < x);

        j = 0;
        do {
            if (j == 0)
                printf("*");
            else
                printf(" *");
            j++;
        } while (j <= i);

        printf("\n");
        i++;
    } while (i < y);

    i = 0;
    do {
        j = 0;
        do {
            if (i == 0) {
                if (j < 3)
                    printf(" ");
                else if (j % 2 == 1)
                    printf("*");
                else
                    printf(" ");
            } else {
                if (j < 1)
                    printf(" ");
                else if (j % 2 == 1)
                    printf("*");
                else
                    printf(" ");
            }
            j++;
        } while (j < 10);
        printf("\n");
        i++;
    } while (i < 2);

    return 0;
}
