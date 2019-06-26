#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0,d=0;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
        c++;
        else
            d++;
    }
    //cout<<c<<d<<endl;
    if(c>d)
    {
        for(int i=0;i<s.length();i++)
            s[i]=toupper(s[i]);
    }
    else
    {
       for(int i=0;i<s.length();i++)
           s[i]= tolower(s[i]);
    }
    cout<<s<<endl;



    return 0;
}
