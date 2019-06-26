#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    long long s=0,l;
    l=a+b*c;
    s=max(s,l);
    l=a*b+c;
    s=max(s,l);
    l=a*(b+c);
    s=max(s,l);
    l=(a+b)*c;
    s=max(s,l);
    l=a*b*c;
    s=max(s,l);
    l=a+b+c;
    s=max(s,l);
    cout<<s<<endl;

    return 0;
}
