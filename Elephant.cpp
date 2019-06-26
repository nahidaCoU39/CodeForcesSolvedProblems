#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll x,c=0;
    cin>>x;

    while(x!=0)
    {
        if(x>=5)
        {
            c++;
            x=x-5;
        }
        else if(x>=4)
        {
            c++;
            x=x-4;
        }
        else if(x>=3)
        {
            c++;
            x=x-3;
        }
        else if(x>=2)
        {
            c++;
            x=x-2;
        }
       else if(x>=1)
        {
            c++;
            x=x-1;
        }
    }
    cout<<c<<endl;

    return 0;
}
