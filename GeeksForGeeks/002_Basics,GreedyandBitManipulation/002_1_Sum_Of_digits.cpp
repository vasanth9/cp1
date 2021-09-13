#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;string s;
    cin>>s;
    cout<<accumulate(s.begin(),s.end(),0)-48*s.length(); 
    }