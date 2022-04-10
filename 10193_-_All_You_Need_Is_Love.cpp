#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int count = 1;
    while (t--)
    {
        string s1, s2;
        cin>>s1>>s2;
        unsigned long long num1 = stoull(s1, 0, 2);
        unsigned long long num2 = stoull(s2, 0, 2);
        if(__gcd(num1, num2) > 1)
        {
            cout<<"Pair #"<<count<<": All you need is love!"<<endl;
        }
        else
        {
            cout<<"Pair #"<<count<<": Love is not all you need!"<<endl;
        }
        count++;
    }
    
}