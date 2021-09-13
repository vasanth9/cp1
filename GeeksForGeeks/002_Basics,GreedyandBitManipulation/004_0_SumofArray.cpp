#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,3,5,67,9,0,3};
    cout<<accumulate(v.begin(),v.end(),0);
}