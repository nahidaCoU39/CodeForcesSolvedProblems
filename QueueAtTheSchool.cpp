#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i=0;
    cin>>n>>t;
    string s;
    cin>>s;




    for(int j=1;j<=t;j++)
    {
        while( i<n-1)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                char c=s[i+1];
                s[i+1]=s[i];
                s[i]=c;
                i+=2;
            }
            else
            {
               i=i+1;
            }
            //i=i+1;
        }
        i=0;
    }
    cout<<s<<endl;


    return 0;
}
