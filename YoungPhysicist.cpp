/*  Author : Alpha_The_Coder
    Created on 05/12/2020      */
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
   // scanf("%d",&t);
    while(t--) {
        solve();
    }
    return 0;
}
void solve()
{
    int n;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        cin>>a[i][j];
    }
    bool ans=true;
    for(int j=0;j<3;j++)
    {
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=a[i][j];
        }
        if(s!=0)
        {
            ans=false;
            break;
        }
    }
    if(ans) cout<<"YES";
    else cout<<"NO";
}

