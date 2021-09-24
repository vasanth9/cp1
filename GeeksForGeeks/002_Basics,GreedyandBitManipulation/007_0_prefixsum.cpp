#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,3,5,7,9,2,4,6,8};int n=9;
    vector<int>prefix;prefix.push_back(a[0]);
    for(int i=1;i<n;i++){
            prefix.push_back(prefix[i-1]+a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<prefix[i]<<" ";
    }
}