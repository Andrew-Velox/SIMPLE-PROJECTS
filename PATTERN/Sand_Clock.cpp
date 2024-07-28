#include <bits/stdc++.h>
#define ll long long

using namespace std;

void clock(ll n,char get){
    ll g = ((n+1)*2)/2;

    ll f= 0;
    ll r = n;
    ll l = n;
    for(int x=1; x<=(n*2)+2; x++){
        f++;
        if(f<=n+2){
            for(int y=2; y<=x; y++){
                if(x==n+2 && y==x-1){
                    cout << "/ \\";
                    break;
                }
                if(y==x) cout << "\\";
                else cout << " ";
            }

            for(int y=n+1; y>=x; y--){
                if(x==1){
                    cout << "- ";
                    continue;
                }
                else cout << get;
                if(y==x) cout << "/";
                else cout << " ";
            }
        }
        else{
            for(int y=r; y>=2; y--){
                if(y==2) cout << "/";
                else cout << " ";
            }
            r--;

            for(int y=l; y<=x-2; y++){
                if(x==(n*2)+2){
                    cout << "- ";
                    continue;
                }
                if(y==x-2) cout << " \\";
                else cout << "  ";
            }
        }




        cout << endl;
    
       
       
    }


}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    clock(5,'*');
    return 0;
}
