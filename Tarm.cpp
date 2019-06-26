#include<bits/stdc++.h>
typedef  long long  ll;
using namespace std;


int main()
{
    int n;
    ll c=0;

    cin>>n;
    vector<ll>d;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    for(int j=0;j<n-1;j++)
    {
        c+=b[j]-a[j+1];
        d.push_back(c+b[j+1]);
    }
    sort(d.begin(),d.end());
    ll s=d.size();
    cout<<d[s-1]<<endl;


    return 0;
}
