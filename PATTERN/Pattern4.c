"""
  _________________Output___________
  
Enter: 5
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
"""
  
#include <stdio.h>

int main(){
    int n,x,y;

    printf("Enter: ");
    scanf("%d",&n);

    for(x=1;x<=n;x++){
        for(y=1;y<=x;y++){
            printf("%d ",y%2);            
        }
        printf("\n");
    }

    return 0;
}
