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
    int a[6][6];
    int posofonei=0,posofonej=0;
    for(int i=1;i<=5;i++)
    for(int j=1;j<=5;j++)
    {
        cin>>a[i][j];
        if(a[i][j]==1)
        {
            posofonei=i;
            posofonej=j;
        }
    }
    int ans=(abs(posofonei-3)+abs(posofonej-3));
    cout<<ans;

}

