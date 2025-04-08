// //for loop : 
// #include <stdio.h> 
// int main() { 
//     int i, j; 
//     for (i = 1; i <= 5; i++) {  
//         for (j = 1; j <= i; j++) {   
//             if((i + j) % 2 == 0)
//             printf("1 ");
//         else
//             printf("0 "); 
//         } 
//         printf("\n"); 
//     } 
//     return 0; 
// } 


// //while loop: 
// #include <stdio.h> 
// int main() { 
//     int i = 1, j; 
//     while (i <= 5) { 
//         j = 1; 
//         while (j <= i) { 
//             if((i + j) % 2 == 0)
//             printf("1 ");
//         else
//             printf("0 "); 
//             j++; 
//         } 
//         printf("\n"); 
//         i++; 
//     } 
//     return 0; 
// } 


//do-while loop: 
#include <stdio.h> 
int main() { 
    int i = 1, j; 
    do { 
        j = 1; 
        do { 
            if((i + j) % 2 == 0)
                printf("1 ");
            else
                printf("0 "); 
            j++; 
        } while (j <= i); 
        printf("\n"); 
        i++; 
    } while (i <= 5); 
    return 0; 
} 