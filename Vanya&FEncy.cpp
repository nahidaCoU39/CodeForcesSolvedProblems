#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;
    int a[n+1],c=0,d;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>h)
            c++;
    }
    d=n-c;
    long long ans=d+(2*c);
    cout<<ans<<endl;

    return 0;
}
