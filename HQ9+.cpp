#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='H')
            c++;
            else if(s[i]=='Q')
                c++;
            else if(s[i]=='9')
                c++;

    }
    if(c>0)
        cout<<"YES"<<endl;
    else if(c==0)
        cout<<"NO"<<endl;

    return 0;
}
