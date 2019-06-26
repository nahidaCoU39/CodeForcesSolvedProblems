#include<bits/stdc++.h>

using namespace std;

bool equal(const std::string& s1,const std::string& s2)
{
    return (0==strcasecmp(s1.c_str(),s2.c_str()));
}

int main()
{
    string  s1;
    string  s2;
    //vector<string>v1;
    //vector<string>v2;
    cin>>s1;
    cin>>s2;
    //v1.push_back(s1);
    //v2.push_back(s2);
    bool r=equal(s1,s2);
    if(r==1)
    {
        cout<<"0"<<endl;

    }
    else
    {
        transform(s1.begin(),s1.end(),s1.begin(),::tolower);
        transform(s2.begin(),s2.end(),s2.begin(),::tolower);

        bool p=lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end());
        //cout<<p<<endl;
        if(p==true)
            cout<<"-1"<<endl;
        else
            cout<<"1"<<endl;
    }
    //v1.push_back(s1);
   // v2.push_back(s2);



    return 0;
}
