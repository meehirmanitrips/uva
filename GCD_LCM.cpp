#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g, l;
        cin>>g>>l;
        if(l%g) cout<<"-1"<<endl;
        else cout<<g<<" "<<l<<endl;
    }
}