#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int p,q;
    vector<int>v;
    vector<int>::iterator ip;
    cin>>n;
    cin>>p;

    for(int i=0;i<p;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    cin>>q;
    int d=p+q;
     for(int i=0;i<q;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ip=unique(v.begin(),v.begin()+d);
    v.resize(distance(v.begin(),ip));
    if(v.size()==n)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;


    return 0;
}
