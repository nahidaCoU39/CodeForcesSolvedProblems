#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    int d=1001,l;
    cin>>n>>m;
    vector<int>v;;
    for(int i=0;i<m;i++)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
     //for(int i=0;i<m;i++)
       // cout<<v[i]<<" ";
   //  cout<<endl;


        if(n<=m)

        {
            n=n-1;
            for(int i=0;(i+n)<m;i++)
            {
                l=v[i+n]-v[i];
                d=min(d,l);
               // cout<<l<<" ";
                //cout<<d<<" ";

            }
            //cout<<endl;

        }
        cout<<d<<endl;


    return 0;
}
