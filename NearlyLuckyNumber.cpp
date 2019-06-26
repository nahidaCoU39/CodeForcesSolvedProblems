#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
   ll n,c=0,s=0,f=0;
   cin>>n;

   while(n!=0)
   {
       ll r=n%10;
       //cout<<r<<" ";
       n=n/10;
       if(r==7||r==4)
        c++;
        //cout<<c<<" ";
   }
   //cout<<endl;
   //cout<<c<<endl;

   while(c!=0)
   {
       s++;

       ll d=c%10;
       c=c/10;
       if(d==4||d==7)
        f++;

   }
   //cout<<s<<" "<<f<<endl;
   if(f!=0 && s!=0 && f==s)
    cout<<"YES"<<endl;
   else
    cout<<"NO"<<endl;

    return 0;
}
