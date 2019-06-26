#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    char c[s.size()+1];
    strcpy(c,s.c_str());
    int p=0,d=0;

    for(int i=0;i<(s.size()+1);i++)
    {
        if(c[i]=='1')
        {
            p++;

        }
        else
        {
            if(p<7)
                p=0;
        }
        if(c[i]=='0')
        {
            d++;
        }
        else
        {
            if(d<7)
                d=0;
        }

    }
    if(p>=7 || d>=7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
