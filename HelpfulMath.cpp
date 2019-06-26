#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    char a[s.length()+1];
    vector<char>v;
    strcpy(a,s.c_str());
    //for(int j=0;j<s.length();j++)
    //cout<<a[j];
   // cout<<endl;

   // cout<<a.length()<<endl;
    for(int i=0;i<(s.length()+1);i+=2)
    {



          v.push_back(a[i]);
          //cout<<v[i]<<" ";

    }

    int n=v.size();
    //for(int j=0;j<n;j++)
        //cout<<v[j]<<" ";
    //cout<<endl;

    sort(v.begin(),v.end());
    for(int j=0;j<n;j++)
    {
        if(j!=n-1)
        {
            cout<<v[j];
            cout<<"+";
        }
        else{
            cout<<v[j];
        }

    }
    cout<<endl;


    return 0;
}
