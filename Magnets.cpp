#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n,c=1;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
            c++;
    }
    cout<<c<<endl;

    return 0;
}
