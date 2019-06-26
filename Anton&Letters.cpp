#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    set<char>v;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            v.insert(s[i]);
        }
    }
    cout<<v.size()<<endl;



    return 0;
}
