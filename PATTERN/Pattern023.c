/*
 _________________Output___________
  
Enter: 4
    1
   2 2
  3 3 3
 4 4 4 4
  3 3 3
   2 2
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
            printf(" %d",x);
        }
        printf("\n");
    }

    for(x=n-1;x>=1;x--){
        for(m=1;m<=n-x;m++){
            printf(" ");
        }
        for(y=1;y<=x;y++){
            printf(" %d",x);
        }
        printf("\n");
        }
        
    return 0;
}
