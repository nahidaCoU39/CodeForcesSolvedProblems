#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,count=0;
    cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    for(int j=1;j<=n;j++)
    {
        if(a[j]>0 && a[j]>=a[k])
        {
            count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}
