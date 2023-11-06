/* 

* * * * * * * * * * * * * * * 
* *         * * *         * * 
*   *     *   *   *     *   * 
*     * *     *     * *     * 
*     *       *       *     * 
*   *         *         *   * 
* *           *           * * 
* * * * * * * * * * * * * * *
* *           *           * *
*   *         *         *   *
*     *       *       *     *
*     * *     *     * *     *
*   *     *   *   *     *   *
* *         * * *         * *
* * * * * * * * * * * * * * *

 */

#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void speed(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}


void solve(){
    int n; cin >> n;

    int m= (n*2)-1;

    int def=0,def2=0;

    for(int x=1; x<=(n*2)-1; x++){
        for(int y=1; y<=(n*2)-1; y++){
            if(x==1 || x==m || x==(m/2)+1 || y==1 || y==m || y==(m/2)+1) cout << "* ";
            else if(x==y){
                if(x<=n/2 || x>=m-(n/2)+1){
                    cout << "* ";
                }

                else cout << "  ";
            }

            else if((x<=n && y==n+def) || (x>=n && y==(def-n)+2)){
                cout << "* ";
            }

            else if(x+y==n+1 || (x+y==m+1) && y>(m-n/2) || (x+y==m+1) && x>(m-n/2)){
                cout << "* ";
            }

            else if(x>=n && y==m-def2+n-1) cout << "* ";
            else cout << "  ";
            
        }
        def++;
        def2++;
        cout << endl;
    }

}

int main(){
    speed();
    ll int t=1;// cin >> t;
    while(t--) solve();
    return 0;
}
