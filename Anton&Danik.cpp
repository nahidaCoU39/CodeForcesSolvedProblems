#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n,a=0,d=0;
    cin>>n;
    char c[n+1];
    for(ll i=0;i<n;i++)
    {
        cin>>c[i];
        if(c[i]=='A')
            a++;
        else
            d++;
    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(a<d)
        cout<<"Danik"<<endl;
    else
        cout<<"Friendship"<<endl;

    return 0;
}
