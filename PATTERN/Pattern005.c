/*
  _________________Output___________
  
Enter: 5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
  
#include <stdio.h>

int main(){

    int n,x,y;

    printf("Enter: ");
    scanf("%d",&n);

    for(x=n;x>=1;x--){
        for(y=1;y<=x;y++){
            printf("%d ",y);
        }
        printf("\n");
    }
    return 0;
}
