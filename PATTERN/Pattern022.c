/*
 _________________Output___________
  
Enter: 4

   *
  * *
 * * *
* * * *
 * * *
  * *
   *

*/

#include <stdio.h>

int main(){
    int n,x,y,m;
    printf("Enter: ");
    scanf("%d",&n);

    for(x=1;x<=n;x++){
        for(y=1;y<=n-x;y++){
            printf(" ");
        }
        for(y=1;y<=x-1;y++){
            printf(" *");
        }
        printf("\n");
    }
    
    for(x=n;x>=1;x--){
        for(m=1;m<=n-x;m++){
            printf(" ");
        }
        for(y=1;y<=x;y++){
            printf("* ");
        }
        printf("\n");
        }
        
    return 0;
}
