"""
  _________________Output___________
  
Enter: 5
x x x x x
x x x x
x x x
x x
x

"""
  
#include <stdio.h>

int main(){

    int n,x,y;

    printf("Enter: ");
    scanf("%d",&n);

    for(x=n;x>=1;x--){
        for(y=1;y<=x;y++){
            printf("x ");
        }
        printf("\n");
    }
    return 0;
}
