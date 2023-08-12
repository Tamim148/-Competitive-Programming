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
       vector<int>b;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           b.push_back(a[i]);
       }
       sort(b.begin(),b.end());
       int flag=1;
       for(int i=0;i<n;i++)
       {
           if(a[i]%2!=b[i]%2)
           {
               flag=0;
               break;
           }
       }
       if(flag)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           cout<<"NO"<<endl;
       }



    }


    return 0;
}


