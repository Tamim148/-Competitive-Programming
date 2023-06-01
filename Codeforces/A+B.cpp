

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
        string s;
        cin>>s;
        int a=s[0]-'0';
        int b=s[2]-'0';
        cout<<a+b<<endl;
    }


    return 0;
}


