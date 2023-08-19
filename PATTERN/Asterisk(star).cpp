/*
*       *       * 
  *     *     *
    *   *   *
      * * *
* * * * * * * * *
      * * *
    *   *   *
  *     *     *
*       *       * 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int size =9;
    int col,row;

    for(col=1; col<=size; col++){
        for(row=1; row<=size; row++){
            if(col == row || col == size-row+1 || col == size/2+1 || row == size/2+1){
                cout << "* ";
            }
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}
