// //for loop: 
// #include <stdio.h> 
// int main() { 
//     for (int i = 5; i > 0; i--) { 
//         for (int j = 0; j < i; j++) { 
//             printf("* "); 
//         } 
//         printf("\n"); 
//     } 
//     return 0; 
// } 


// //while loop: 
// #include <stdio.h> 
// int main() { 
//     int i = 5; 
//     while (i > 0) { 
//         int j = 0; 
//         while (j < i) { 
//             printf("* "); 
//             j++; 
//         } 
//         printf("\n"); 
//         i--; 
//     } 
//     return 0; 
// } 


//do-while loop: 
#include <stdio.h> 
int main() { 
    int i = 5; 
    do { 
        int j = 0; 
        do { 
            printf("* "); 
            j++; 
        } while (j < i); 
        printf("\n"); 
        i--; 
    } while (i > 0); 
    return 0; 
} 