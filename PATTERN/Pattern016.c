/*
 _________________Output___________
  
Enter: 5
    *
   **
  ***
 ****
*****

*/

#include <stdio.h>

int main(){

    int n,x,y;

    printf("Enter: ");
    scanf("%d",&n);
    
    for(x=1;x<=n;x++){
        for(y=1;y<=n-x;y++){
            printf(" ");
        }
        for (y =1;y<=x;y++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
