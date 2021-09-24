#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,3,5,7,9,2,4,6,8};int n=9;
    int b[9];
    partial_sum(a,a+n,b);
    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
}