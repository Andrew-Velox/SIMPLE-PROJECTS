/* Simple pattern3
n: 5
1
12
123
1234
12345
*/


#include <stdio.h>

int main() {
    int r,sum=0,rows;
    
    printf("Enter: ");
     scanf("%d",&rows);

    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= i; j++) {
            
            printf("%d",sum+j);
            
        }
        printf("\n");
    }

    return 0;
}
