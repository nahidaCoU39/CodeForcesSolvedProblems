#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll sum;
    if(n%2==0)
        sum=n/2;
    else
        sum=((n+1)/2)*(-1);


    cout<<sum<<endl;

    return 0;
}
