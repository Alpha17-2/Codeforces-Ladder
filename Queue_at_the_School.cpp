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

   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   for(int j=1;j<=k;j++)
   {
      int i=0;
      while (i<n)
      {
          if(s[i]=='B' && s[i+1]=='G')
          {
              swap(s[i],s[i+1]);
              i+=2;
          }
          else
          {
              i++;
          }    
      }
   }
   cout<<s;
}

