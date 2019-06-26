#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n,c=1;
    ll m=1;
    cin>>n;
    ll a[n+1];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(ll j=0;j<n-1;j++)
    {
        if(a[j]<a[j+1] || a[j]==a[j+1])
        {
            c++;
            m=max(c,m);
        }
        else
        {



            c=1;
        }
    }
    cout<<m<<endl;


    return 0;
}
