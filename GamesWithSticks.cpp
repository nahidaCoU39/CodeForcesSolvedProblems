#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,d,c=0;
    cin>>n>>m;
    if(n>m)
    {
        d=n-m;
        n=n-d;
    }


    else
    {
        d=m-n;
        m=m-d;
    }
    while(n!=0)
    {
        n=n-1;
        c++;
    }
    if(c%2==0)
        cout<<"Malvika"<<endl;
    else
        cout<<"Akshat"<<endl;




    return 0;
}
