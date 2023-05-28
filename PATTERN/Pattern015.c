/*
 _________________Output___________
  
Enter: 5
X
X X
X X X
X X X X
X X X X X
X X X X
X X X
X X
X

*/


#include <stdio.h>

int main(){

    int n,x,y;

    printf("Enter: ");
    scanf("%d",&n);

    for(x=1;x<=n;x++){
        for(y=1;y<=x;y++){
            printf("X ");
        }
        printf("\n");
    }
    for(x=n-1;x>=1;x--){
        for(y=1;y<=x;y++){
            printf("X ");
        }
        printf("\n");
    }
    return 0;
}
