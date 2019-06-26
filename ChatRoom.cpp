#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    char a[s.length()+1];
    strcpy(a,s.c_str());
    int c=0,d=0,e=0,f=0,w=0,h=0,k=0,m=0,n=0,p=0;

    for(int i=0;i<s.length();i++)
    {
        if(a[i]=='h')
        {
            m++;
            if(c==0)
                c=i;
        }

        else if(a[i]=='e')
        {
            n++;
            if(d==0)
                d=i;
        }
        else if(a[i]=='l')
        {
            w++;
            if(e==0)
                e=i;
                if(w==2)
                    h=i;
        }
        else if(a[i]=='o')
        {
            p++;
            if(f==0)
                f=i;
        }
        else
            k++;
    }
    if(m>0 && n>0 && w>=2 &&p>0)
    {


    //cout<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<w<<endl;
    if(c<d && d<e && e<f && h<f && k>=2)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    }

    return 0;
}
