

#include<bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long
using namespace std;


int main()
{
    fastio;
    int t;
    cin>>t;
    while(t--)
    {
       int n;cin>>n;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            if(x%2!=0)cnt++;
        }
        if(cnt%2==0)cout<<"YES\n";
        else cout<<"NO\n";
    }


    return 0;
}


