/*
  _________________Output___________
  
Enter: 5
1
22
333
4444
55555

*/

#include <stdio.h>

int main(){
    int n,x,y;

    printf("Enter: ");
    scanf("%d",&n);

    for(x=1;x<=n;x++){

        for(y=1;y<=x;y++){
            printf("%d",x);
            
        }
        printf("\n");
    }


    return 0;
}
