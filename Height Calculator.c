#include <stdio.h>

int main() {
    
    float i,f,mm,m,mmm;
    
   printf("Enter your height as feet & Inches :  ");
   scanf("%f %f",&f,&i);
   
   
   mm = f * 30.48;
   m = i * 2.54;
   mmm= mm + m;
   printf("\n You are %.2f cm",mmm);
   return 0;
}
