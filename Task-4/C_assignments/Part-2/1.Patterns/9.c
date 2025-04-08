// //for loop : 
// #include <stdio.h> 
// int main() { 
//     int i, j; 
//     for (i = 5; i >= 1; i--) {  
//         for (j = 5; j >= i; j--) {   
//             printf("%d", i);
//         } 
//         printf("\n"); 
//     } 
//     return 0; 
// } 


// //while loop: 
// #include <stdio.h>

// int main() {
//     int i = 5;

//     while(i >= 1) {
//         int j = 5;
//         while(j >= i) {
//             printf("%d ", i);
//             j--;
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
        int j = 5;
        do {
            if(j >= i)
                printf("%d ", i);
            j--;
        } while(j >= i);
        printf("\n");
        i--;
    } while(i >= 1);

    return 0;
}
