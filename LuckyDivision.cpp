#include<bits/stdc++.h>
using namespace std;
//vector<int>v;

vector<int>lucky(){
    vector<int>v;
    for(int i=1;i<=1000;i++)
    {
        int d=0,c=0;
        while(i>0)
        {
             d++;
            int d=i%10;
            //if(d==7 || d==4){
            i=i/10;

            if(d==7 || d==4){
               c++;
            }



            //i=i/10;
           // if(d==7 || d==4)

        }
        if(c==d)
            v.push_back(i);
    }
    return v;

}

int main()
{
    int n,c=0;
    //vector<int>v;
    cin>>n;
    cout<<n<<endl;
    vector<int>v1=lucky();
    cout<<n<<endl;
    for(int i=0;i<v1.size();i++)
        cout<<v1[i]<<" ";
    cout<<endl;

    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]<=n)
        {
            if(n%v1[i]==0)
            {
                c++;
                break;
            }
        }
    }
    //if(c>0)



        if(c>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;



    return 0;
}
