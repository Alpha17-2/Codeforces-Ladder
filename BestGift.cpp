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
   int n,k;
   cin>>n>>k;
   map<int,lli>mymap;
   loop(0,n)
   {
       int v;
       cin>>v;
       mymap[v]++;
   }

   vector<int>a;
   for(auto x:mymap)
   {
       int f=x.second;
       a.push_back(f);
   }
   lli ans=0;
   for(int i=0;i<a.size();i++)
   {
       lli s=0;
       for(int j=i+1;j<a.size();j++)
       {
           s=s+(a[i]*a[j]);
       }

       ans+=s;

   }
   cout<<ans;
}


















