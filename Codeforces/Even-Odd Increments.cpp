

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
         long long n,m;
        cin>>n>>m;
        long long  a[n];
        long long p,o,sum,cnt1=0,cnt2=0;
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
             if(a[i]%2!=0)
                {

                   cnt1++;
                }
                else
                {
                    cnt2++;
                }
            sum=sum+a[i];
        }

        for(int i=0;i<m;i++)
        {


            cin>>p>>o;
            if(p==1 && o%2==0)
            {
                sum=sum+cnt1*o;
                cout<<sum<<endl;
            }
            else if(p==1 && o%2!=0)

            {
                sum=sum+cnt1*o;
               cout<<sum<<endl;
               cnt1=0;
               cnt2=n;
            }
           else  if(p==0 && o%2==0)
            {

                sum=sum=sum+cnt2*o;
                cout<<sum<<endl;
            }
            else if(p==0 && o%2!=0)

            {
                sum=sum+cnt2*o;
               cout<<sum<<endl;
               cnt2=0;
               cnt1=n;
            }




        }


    }


    return 0;
}


