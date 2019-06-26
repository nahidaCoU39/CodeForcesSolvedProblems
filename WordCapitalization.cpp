#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    char a[s.length()+1];
   // vector<char>v;
    strcpy(a,s.c_str());
    char b=a[0];
    char c=toupper(b);

    a[0]=c;
    for(int i=0;i<s.length();i++)
        cout<<a[i];
    cout<<endl;
    return 0;
}
