/*
  _________________Output___________
  
Enter a Number:- 5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
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
