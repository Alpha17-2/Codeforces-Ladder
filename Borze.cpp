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
    string s;
    cin>>s;
    int n=s.size();
    int i=0;
    string myans="";
    while (i<n)
    {
        if(s[i]=='.')
        {
            myans+="0";
            ++i;
        }
        else if(s[i]=='-'&&s[i+1]=='.')
        {
            myans+="1";
            i+=2;
        }
        else
        {
            myans+="2";
            i+=2;
        }
    }
    cout<<myans;
    
}

