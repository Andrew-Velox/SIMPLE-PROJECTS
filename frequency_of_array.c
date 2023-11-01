#include <stdio.h>

int main(){
    int n[10]={1,2,3,9,5,60,2,1,10,100};
    int num[101]={0};
    for(int y=0; y<10; y++){
        num[n[y]]++;

    }

    for(int i=0;i<101;i++){   
        if(num[i]!=0){
            printf("%d - %d\n",i,num[i]);
        }
    }
    return 0;
}
