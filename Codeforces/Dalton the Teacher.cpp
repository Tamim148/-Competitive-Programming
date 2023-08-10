


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
        int n;
        cin>>n;
        int a[n];
        double cnt=0;
        for(int i=0;i<n;i++)
        {

            cin>>a[i];
            if(i+1==a[i])
            {
                cnt++;
            }

        }
        double s=ceil(cnt/2);

        cout<<s<<endl;
    }


    return 0;
}


