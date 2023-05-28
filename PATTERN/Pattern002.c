/*
  _________________Output___________
  
Enter: E
A
A B
A B C
A B C D
A B C D E
*/

#include <stdio.h>
int main(){

    int n,x,y;

    printf("Enter a Number:- ");
    scanf("%d",&n);

    for (x=1;x<=n;x++){
        for (y=1;y<=x;y++){
            printf("%d ",y);
         
        }  
        printf("\n");
    }

    return 0;
}
