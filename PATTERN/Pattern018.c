/*
 _________________Output___________
  
Enter: 5
10101
 1010
  101
   10
    1

*/

#include <stdio.h>

int main(){

    int n,x,y;

    printf("Enter: ");
    scanf("%d",&n);

    for(x=n;x>=1;x--){
        for(y=1;y<=n-x;y++){
            printf(" ");
        }
        for (y =1;y<=x;y++){
            printf("%d",y%2);
        }
        printf("\n");
    }
    return 0;
}
