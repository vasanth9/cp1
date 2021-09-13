#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,p;
    cin>>s;p=s;
    reverse(p.begin(),p.end());
    s.compare(p)?cout<<"No\n":cout<<"Yes\n";
}