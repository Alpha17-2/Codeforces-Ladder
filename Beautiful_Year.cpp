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
    int year;
    cin>>year;
    year++;
    string s="";
    while (true)
    {
        s=to_string(year);
        map<char,int>mymap;
        loop(0,4)
        mymap[s[i]]++;

        bool found=true;
        for(auto x:mymap)
        {
            if(x.second!=1)
            {
                found=false;
                break;
            }
        }
        if(found)
        break;
        ++year;
    }
    cout<<s;   
}

