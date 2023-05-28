/*
 _________________Output___________
  
Enter: E
A
A B
A B C
A B C D
A B C D E
A B C D E
A B C D
A B C 
A B
A

*/


#include <stdio.h>

int main(){

    char n,x,y;

    printf("Enter: ");
    scanf("%c",&n);

    for(x='A';x<=n;x++){
        for(y='A';y<=x;y++){
            printf("%c ",y);
        }
        printf("\n");
    }
    for(x=n;x>='A';x--){
        for(y='A';y<=x;y++){
            printf("%c ",y);
        }
        printf("\n");
    }
    return 0;
}
