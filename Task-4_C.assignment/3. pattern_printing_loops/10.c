// //for loop : 
// #include <stdio.h>

// int main() {
//     int i, j;

//     for(i = 1; i <= 5; i++) {
//         for(j = 5; j >= 6-i; j--) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }




// // //while loop: 
// #include <stdio.h>

// int main() {
//     int i = 1;

//     while(i <= 5) {
//         int j = 5;
//         while(j >= 6-i) {
//             printf("%d ", j);
//             j--;
//         }
//         printf("\n");
//         i++;
//     }

//     return 0;
// }


// //do-while loop: 
#include <stdio.h>

int main() {
    int i = 1;

    do {
        int j = 5;
        do {
            if(j >= 6-i)
                printf("%d ", j);
            j--;
        } while(j >= 6-i);
        printf("\n");
        i++;
    } while(i <= 5);

    return 0;
}
