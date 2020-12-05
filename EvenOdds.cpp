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
    //scanf("%d",&t);
    while(t--) {
        solve();
    }
    return 0;
}
void solve()
{

    lli n,k;
    cin>>n>>k;
    if(even(n))
    {
       lli half=n/2;
       if(k<half)
       {
          cout<<(lli)((k*2)-1);
       }
       else if(k>half)
       {
           lli newK=k-half;
           cout<<(lli)(2*newK);
       }
       else
       {
           cout<<(lli)(n-1);
       }
    }
    else
    {
       lli half=n/2;
       ++half;
       if(k==half)
       {
          cout<<n;
       }
       else if(k>half)
       {
           lli newK=k-half;
           cout<<(lli)(newK*2);
       }
       else
       {
           cout<<(lli)(k*2)-1;
       }
    }
}

