#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,c=0;
    cin>>m>>n;
    while(m<=n)
    {
       m=m*3;
       n=n*2;
       c++;
    }
    cout<<c<<endl;
    return 0;
}
