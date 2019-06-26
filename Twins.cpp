#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,in=0;
    long long sum=0,s1=0;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
        sum+=v[i];

    }
    long long d=sum/2;
    //cout<<d<<endl;
    sort(v.begin(),v.end());
   // for(int i=0;i<n;i++)
        //cout<<v[i]<<" ";
    //cout<<endl;
    for(int j=v.size()-1;j>-1;j--)
    {
        in++;
       s1= s1+v[j];
       if(s1>d)
       {

          break;
       }
    }
    //cout<<s1<<endl;
    cout<<in<<endl;

    return 0;
}
