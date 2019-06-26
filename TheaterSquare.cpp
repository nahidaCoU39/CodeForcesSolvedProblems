#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,m,a;
   unsigned long long s;
    cin>>n>>m>>a;

    s= ceil((double)n/a)*ceil((double)m/a);
    cout<<s<<"\n";


    return 0;
}
