#include<bits/stdc++.h>

using namespace std;

string removeall(string s,const string& s1)
{
    int c=0;
    size_t start_pos=0;
    while((start_pos=s.find(s1))!=string::npos)
    {
        //c++;
        s.erase(start_pos,s1.length());
        //if(c>1)
       // {
            s.insert(start_pos," ");
        //}
    }
    return s;
}

int main()
{
    string s;
    cin>>s;
    s=removeall(s,"WUB");
    cout<<s<<endl;


    return 0;
}
