#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,4,-6,4,5,7,8,2,145,67,22};
    auto min_max=minmax_element(v.begin(),v.end());
    cout<<"minimum element is:"<<*min_max.first<<"\nmaximum element is:"<<*min_max.second;
}