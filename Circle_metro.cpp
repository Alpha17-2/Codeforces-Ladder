/*  Author : Alpha_The_Coder
    Created on 07/12/2020      */
#include <bits/stdc++.h>
using namespace std;
#define iamalpha ios_base::sync_with_stdio(false);cin.tie(NULL);
#define loop(a,n) for(int i=a;i<n;i++)
#define nloop(a,n) for(int j=a;j<n;j++)
#define lli long long int
#define even(n) n%2==0?true:false
void solve();

int main()
{
    iamalpha;
    int t=1;
    //scanf("%d",&t);
    while(t--) {
        solve();
    }
    return 0;
}
void solve()
{
    int n,a,x,b,y;
    cin>>n>>a>>x>>b>>y;
    int currentA=a,currentB=b;
    bool match=false;
    while(true)
    {
         if(currentA==n)
        {
            currentA=0;
        }
        if(currentB==1)
        {
            currentB=n+1;
        }
        currentA++; // 4
        currentB--; // 0
        if(currentA==currentB)
            {
                match=true;
                break;
            }
            if(currentA==x || currentB==y)
                break;
    }
    if(match) cout<<"YES";
    else cout<<"NO";
}


















