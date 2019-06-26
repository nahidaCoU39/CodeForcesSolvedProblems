#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
   // char f;
    int c=0,d=0;
    for(int i=0;i<s.length();i++)
    {
        //f=s[i];

        if(isupper(s[i]))
        {
            c++;


        }
        else if(islower(s[0]))
        d++;

    }
     //cout<<c<<endl;
      //cout<<d<<endl;


    if(c==s.length() || (c==s.length()-1 && d==1))
    {
        if(c==s.length())
        {
           for(int i=0;i<s.length();i++)
                s[i]=tolower(s[i]);
        }
           else
           {
               //cout<<c<<endl;

            s[0]=toupper(s[0]);
            for(int i=1;i<s.length();i++)
            s[i]=tolower(s[i]);
           }


    }
    cout<<s<<endl;

    return 0;
}
