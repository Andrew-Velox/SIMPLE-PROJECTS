/*
  _________________Output___________
  
Enter: G
G G G G G G G
F F F F F F
E E E E E
D D D D
C C C
B B
A
*/

#include <stdio.h>

int main(){

    char n,x,y;

    printf("Enter: ");
    scanf("%c",&n);

    for(x=n;x>='A';x--){
        for(y='A';y<=x;y++){
            printf("%c ",x);
        }
        printf("\n");
    }
    return 0;
}
