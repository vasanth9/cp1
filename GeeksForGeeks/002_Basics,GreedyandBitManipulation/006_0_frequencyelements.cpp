#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={10,20,10,5,20,20,10,10,30,5};
    unordered_map<int,int>m;
    int n=v.size();
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<"\n";
    }
}
