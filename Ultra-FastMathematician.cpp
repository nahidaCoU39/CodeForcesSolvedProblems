#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;
    cin>>s>>r;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=r[i])
            s[i]='1';
        else
            s[i]='0';
    }
    cout<<s<<endl;

    return 0;
}
