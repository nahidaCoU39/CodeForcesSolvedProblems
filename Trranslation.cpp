#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int c=0;
   // int d=t.length();
    reverse(t.begin(),t.end());
    for(int i=0;i<s.length();i++)
    {
        //for(int j=t.length();j>0;j--)
        //{
        //cout<<d<<endl;
        //cout<<s[i]<<endl;
       // cout<<t[d];

            if(s[i]==t[i])
            {


                c++;
            }
            //cout<<t[d]<<endl;
            //d--;


        //}
    }
    //cout<<c<<endl;
    if(c==s.length() && c==t.length())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
