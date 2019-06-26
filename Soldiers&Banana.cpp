#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,w;
    long long n,sum=0,d;
    cin>>k>>n>>w;

    for(int i=1;i<=w;i++)
    {
       sum=sum+(i*k);
    }
    if(sum>n)
    {
        d=sum-n;
        cout<<d<<endl;
    }
    else
        cout<<"0"<<endl;

    return 0;
}
