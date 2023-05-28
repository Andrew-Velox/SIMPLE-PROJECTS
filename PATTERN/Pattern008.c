/*
  _________________Output___________
  
Enter: 5
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
*/

#include <stdio.h>

int main(){

    int n,x,y;

    printf("Enter: ");
    scanf("%d",&n);

    for(x=n;x>=1;x--){
        for(y=1;y<=x;y++){
            printf("%d ",x);
        }
        printf("\n");
    }
    return 0;
}
