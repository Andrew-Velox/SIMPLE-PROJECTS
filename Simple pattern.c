/* Simple pattern

Enter: 5
*
**
***
****
*****
*/

#include <stdio.h>

int main(){
    
    int x,y,tk,op;
    
    printf("Enter: ");
    scanf("%d",&tk);
    
    for (x=1;x<=tk;x+=1){
        for (y = 1; y<=x; y +=1){
            
            printf("*");
            
            }
        
        printf("\n");
        
        
        }    
   return 0; 
    }
