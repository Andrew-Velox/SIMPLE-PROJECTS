/*
 _________________Output___________
  
Enter: 5
     1
    0 0
   1 1 1
  0 0 0 0
 1 1 1 1 1
  0 0 0 0
   1 1 1
    0 0
     1

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
        for(y=1;y<=x;y++){
            printf(" %d",x%2);
        }
        printf("\n");
    }

    for(x=n-1;x>=1;x--){
        for(m=1;m<=n-x;m++){
            printf(" ");
        }
        for(y=1;y<=x;y++){
            printf(" %d",x%2);
        }
        printf("\n");
        }
        
    return 0;
}
