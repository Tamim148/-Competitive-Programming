#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, s, r;
    cin>>n>>s>>r;

    int maximumOne = s-r;
    cout<<maximumOne<<" ";
    n--;


    int arr[n];
    for(int i=0; i<n; i++){
        arr[i]=1;
    }
    r=r-n;

    int idx=0;
    for(int i=1; i<=r; i++){
        if(arr[idx]!=maximumOne){
            arr[idx]++;
        } else {
            idx++;
            arr[idx]++;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
}
