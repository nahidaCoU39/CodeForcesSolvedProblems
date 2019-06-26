#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    //char a[110];
    std::string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        p=s.length();
        char a[p+1];
        strcpy(a,s.c_str());
        if(p>10)
        {
            cout<<a[0];
            cout<<p-2;
            cout<<a[p-1]<<"\n";

        }
        else
        {
            cout<<s<<"\n";
        }

    }
    return 0;
}
