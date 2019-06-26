#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d=0,e=0,s,c;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {

            d++;
            c=i;
        }
        else
        {
            e++;
            s=i;
        }
    }
    if(d==1)
        cout<<c<<endl;
    else if(e==1)
        cout<<s<<endl;

    return 0;
}
