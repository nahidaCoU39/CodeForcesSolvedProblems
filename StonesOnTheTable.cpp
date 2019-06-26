#include<bits/stdc++.h>
using namespace std;

int main()
{

    int c=0,n;
    cin>>n;
    char a[n];
    for(int j=0;j<n;j++)
        cin>>a[j];
   // string s;
    //cin>>s;
    //char a[s.length()+1];
    //strcpy(a,s.c_str());
    for(int i=0;i<n;i++)
    {
        if(i<(n-1))
        if(a[i]==a[i+1])
        {
            c++;
        }

    }
    cout<<c<<endl;

    return 0;
}
