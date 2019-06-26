#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int d=s.length(),c;
    c=d;
    //cout<<d<<endl;
    char a[d+1];
    strcpy(a,s.c_str());
    for(int i=0;i<s.length();i++)
    {
      for(int j=i+1;j<s.length();j++)
      {
          if(a[i]==a[j])
          {



            d--;
            break;
          }

      }

    }
    //cout<<d<<endl;

    if(d%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;

    }


    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}
