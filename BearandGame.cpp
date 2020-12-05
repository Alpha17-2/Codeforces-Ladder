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

    int n;
    cin>>n;
    vector<int>a(n);
    loop(0,n) cin>>a[i];
    int ans=0;
    int lasttime=a[0];
    if(n==1)
    {
        if(a[0]>15)
            cout<<15;
        else
            cout<<a[0]+15;
        return;
    }
    if(lasttime>15)
    {
        cout<<15;
        return;
    }

    bool loop_break=false;
    loop(1,n)
    {
        int current_time=a[i];
        if((current_time-a[i-1])>15)
        {
            ans=a[i-1]+15;
            cout<<ans;
            return;
        }
    }
    if(a[n-1]+15>=90)
        cout<<90;
    else
    cout<<a[n-1]+15;


}

