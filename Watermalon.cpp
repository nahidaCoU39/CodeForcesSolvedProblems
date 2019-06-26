#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,c=0;
    cin>>w;
    int n=2;
    while( n<w)
    {

        int d=w-n;
        if(d%2==0)
        {
            c=1;
            break;
        }
        else
            n+=2;
    }
    if(c==1)
        cout<<"YES"<<"\n";
    else
        cout<<"NO"<<"\n";
    return 0;
}
