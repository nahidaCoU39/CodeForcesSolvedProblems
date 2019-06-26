#include<bits/stdc++.h>
using namespace std;

int main()
{
    int p,q;
    int a[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                 p=i;
                 q=j;
            }

        }


    }
    /* for(int i=1;i<=5;i++)
     {


        for(int j=1;j<=5;j++)
        {
           cout<<a[i][j];
        }
        cout<<endl;
     }*/

    int r=abs(p-2)+abs(q-2);
    cout<<r<<endl;



    return 0;
}
