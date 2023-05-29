/*
 _________________Output___________
  
Enter: 5
    1
   12
  123
 1234
12345
 1234
  123
   12
    1

*/


#include <stdio.h>

int main(){

    int n,x,y;

    printf("Enter: ");
    scanf("%d",&n);

    for(x=1;x<=n-1;x++){
        for(y=1;y<=n-x;y++){
            printf(" ");
        }
        for (y=1;y<=x;y++){
            printf("%d",y);
        }
        printf("\n");
    }
    for(x=n;x>=1;x--){
        for(y=1;y<=n-x;y++){
            printf(" ");
        }
        for (y=1;y<=x;y++){
            printf("%d",y);
        }
        printf("\n");
    }
    return 0;
}
