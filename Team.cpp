#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j,c=0,p=0;
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=3;k++)
        {
            cin>>j;
            if(j==1)
            {


                c=c+1;
            }



        }
        if(c>=2)
            p++;
            c=0;
    }
    cout<<p<<endl;
    return 0;
}
