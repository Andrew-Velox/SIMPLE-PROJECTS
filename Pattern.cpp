#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int stars=1,spaces=n*2-2;
    for(int i=1;i<=n*2-1;i++)
    {
        int lines=0;
        if(abs(i-n)<=int(n/6)) lines=n*4-spaces;
        for(int j=1;j<=spaces;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=max(lines,stars);j++)
        {
            cout<<"*";
        }
        cout<<endl;
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
