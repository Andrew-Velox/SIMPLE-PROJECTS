/* Simple pattern2
n: 5
*****
*****
*****
*****
*****
*/


#include <stdio.h>

int main() {
    int rows;
    
    printf("Enter: ");
     scanf("%d",&rows);

    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= rows; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
