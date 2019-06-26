#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x1=0,y1=0,z1=0;
    cin>>n;
    int x[n+1],y[n+1],z[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
    }
    for(int j=0;j<n;j++)
    {
       x1=x1+x[j];
       y1=y1+y[j];
       z1=z1+z[j];
    }
    if(x1==0 && y1==0 && z1==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
