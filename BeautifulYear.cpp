#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ll n,ans;
    cin>>n;
    for(ll i=n+1;i<=9012;i++)
    {
        ll a=i/1000;
        ll b=i/100%10;
        ll c=i/10%10;
        ll d=i%10;

        if(a!=b &&a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            //cout<<a<<b<<c<<endl;


            ans=i;
        break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
