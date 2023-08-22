



#include<bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long
using namespace std;


int main()
{
    fastio;
    string s,t;
    cin>>s>>t;
    int c=0;
    int n=min(s.size(),t.size());
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    for(int i=0;i<n;i++)
    {
        if(s[i]==t[i])
        {
            c++;
        }
        else
        {
            break;
        }
    }

    cout<<s.size()+t.size()-c*2<<endl;

    return 0;
}


