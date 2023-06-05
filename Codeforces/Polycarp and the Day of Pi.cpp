
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
        string s="3141592653589793238462643383279";
        string a;
        int c=0;
        cin>>a;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==s[i])
            {
                c++;
            }
            else
            {
                break;
            }

        }

            cout<<c<<endl;
    }


    return 0;
}


