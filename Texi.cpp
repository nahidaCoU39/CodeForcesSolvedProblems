#include<bits/stdc++.h>
using namespace std;

int main()
{
 long long n,a,p4=0,q3=0,r2=0,s1=0,ans;
 //double sum=0;
 cin>>n;
 //long long a[n];
 for(long long i=0;i<n;i++)
 {
     cin>>a;
     if(a==1)
        s1++;
     else if(a==2)
        r2++;
     else if(a==3)
        q3++;
     else if(a==4)
        p4++;
     //sum=sum+a[i];
 }
 //cout<<p4<<" "<<q3<<" "<<r2<<" "<<s1<<endl;

 if(s1<=q3)
 {
     if(r2%2==0)
        r2=r2/2;
     else
        r2=ceil((float)r2/2);
     //cout<<r2;

     ans=p4+q3+r2;
 }
 else{
    s1=s1-q3;
    if(s1<=r2 && r2%2!=0 )
    {
        //if(r2%2==0){
        /*{


         r2=r2/2;
         s1=ceil((float)(s/4));
        ans=p4+q3+r2+s1;
        }
        else
        {*/
           r2=ceil((float)r2/2);
          // cout<<p4<<endl;
           ans=p4+q3+r2;
       // }
    }
    else
    {
        if(r2%2==0)
        {


         r2=r2/2;
         s1=ceil((float)s1/4);
         //cout<<s1<<" "<<q3<<endl;
        ans=p4+q3+r2+s1;
        }
        else
        {


        s1=s1-r2;
         r2=ceil((float)r2/2);
        s1=ceil((float)s1/4);
        //cout<<r2<<endl;
        ans=p4+q3+r2+s1;
    }

 }
    }

 //cout<<sum;
 //long long r=ceil(sum/4);
 cout<<ans<<endl;

 return 0;

}
