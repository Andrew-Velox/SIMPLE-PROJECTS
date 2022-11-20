#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int stars=1,spaces=n*2-2;
    for(int i=1;i<=n*2-1;i++)
    {
        int lines=0;
        if(abs(i-n)<=(n/6)) lines=n*4-spaces;
        for(int j=1;j<=spaces;j++)
        {
            printf(" ");
        }
        int mx;
        if(lines>stars) mx=lines;
        else mx=stars;
        for(int j=1;j<=mx;j++)
        {
            printf("*");
        }
        printf("\n");
        if(i<n) {
            stars+=2;
            spaces-=2;
        }
        else
        {
            spaces+=2;
            stars-=2;
        }
    }
    return 0;
}
 
