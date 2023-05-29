/*
 _________________Output___________
  
Enter: 5
12345
12345
12345
12345
12345

*/

#include <stdio.h>
int main(){
    int n,x,y;
    printf("Enter: ");
    scanf("%d",&n);
    for(x=1;x<=n;x++){    
        for (y=1;y<=n;y++){

            printf("%d",y);
        }
        printf("\n");
    }
    return 0;
}
