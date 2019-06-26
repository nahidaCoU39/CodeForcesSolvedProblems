#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2="hello";
    cin>>s1;
    int a=0,count=0;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]==s2[a])
        {
            a++;
            count++;
        }
    }
    if(count==5)
       cout<<"YES"<<endl;

       else
        cout<<"NO"<<endl;

    return 0;
}
