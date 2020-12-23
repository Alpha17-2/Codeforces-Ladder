/*  Author : Alpha_The_Coder
    Created on 17/12/2020      */
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
    scanf("%d",&t);
    while(t--) {
        solve();
    }
    return 0;
}
void solve()
{
   int n,k;
   cin>>n>>k;
   int start=1;
   for (int  i = 0; i < k; i++)
   {
       cout<<"a";
   }
   

   for(int i=0;i<n-k;i++)
   {
       if(even(i))
       {
           cout<<"b";
       }
       else
       {
           cout<<"c";
       }
   }
   cout<<"\n";
   
   
}


















