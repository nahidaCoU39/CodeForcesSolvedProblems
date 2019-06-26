#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,mx=-1,mi=106,d,c;
    cin>>n;
    vector<int>v;

    int ans;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);

    }




    for(int i=0;i<n;i++)
    {
        if(v[i]>mx)
        {

            mx=max(mx,v[i]);
            d=i;
        }
        if(v[i]<=mi)
        {
            mi=min(mi,v[i]);
            c=i;
        }
    }

   // cout<<d<<" "<<c<<endl;

    if(d<c)
    {
       ans=(d-0)+((n-1)-c);
    }
    else{
        ans=((d-0)+((n-1)-c)-1);
    }
    cout<<ans<<endl;

    return 0;
}
