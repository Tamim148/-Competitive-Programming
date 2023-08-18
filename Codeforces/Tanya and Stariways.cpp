


#include<bits/stdc++.h>
#define fastio  ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long
using namespace std;


int main()
{
    fastio;
    int t,c;
    c=0;
    cin>>t;
    int a[t];
    vector<int>vec;
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            c++;
            vec.push_back(a[i-1]);
        }
    }
    cout<<c<<endl;
    for(int i=1;i<c;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<a[t-1];

    return 0;
}


