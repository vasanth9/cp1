#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int start=0,end=s.length()-1;
    while(s[start]==s[end]&&start<end)
    {
        end--;
        start++;
    }
    s[start]==s[end]?cout<<"Yes\n":cout<<"No\n";
}