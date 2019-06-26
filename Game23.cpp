#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,c=0;
    cin>>n>>m;
    double p= (double)m/n;
    //cout<<p<<endl;

    if(p==1)
    {
        cout<<"0"<<endl;
    }
    else if(floor(p)-p!=0)
    {
        cout<<"-1"<<endl;
    }
    else {
            int k=(long long)p;
        while(k!=1)
        {
            if(k%2!=1)
            {
                k=k/2;
                c++;
            }
            else{
                k=k/3;
                c++;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
