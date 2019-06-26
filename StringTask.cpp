#include<bits/stdc++.h>
using namespace std;

int main()
{
    int j=0;
    std::string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    char a[s.length()+1];
    std ::char *b=new char[200];
    strcpy(a,s.c_str());
    for(int i=0;i<(s.length());i++)
    {
        if(a[i]!='A'&&a[i]!='a'&&a[i]!='E'&&a[i]!='e'&&a[i]!='I'&&a[i]!='i'&&a[i]!='O'&&a[i]!='o'&&a[i]!='U'&&a[i]!='u'&&a[i]!='Y'&&a[i]!='y')
        {
            b[j]='.';
            j++;
            b[j]=a[i];
            j++;
        }

    }


    for(int i=0;i<b.size();i++)
    {
        cout<<b[i];
    }
    cout<<"\n";
    delete [] b;
    return 0;
}
