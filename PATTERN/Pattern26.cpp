/* 
  9
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************
     *********
     *********
     *********
     *********
     *********
*/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    ll int t=1;
    cin >> t;

        int c=0;
        int x=2;
        while(x<=t){
            c++;
            x=x+2;
        }
        // upp----------------
         for(int x=1;x<=6+c;x++){
            for(int y=1;y<=6-x+c;y++){
                cout << " ";
            }
            for (int y=1;y<=x*2-1;y++){
                cout << "*";
            }
            cout << "\n";
        }
        // down ----------------
        for (int y=1;y<=5;y++){
                for (int y=1;y<=5;y++){
                    cout << " ";
                }
                for (int y=1;y<=t;y++){
                    cout << "*";
                }
                cout << endl;
            }
    
    return 0;
}
