#include<bits/stdc++.h>
using namespace std;
template<class T>
void printArray(T arr[],int n,string space){
    for(int i=0;i<n;i++ ){
        cout<<arr[i]<<space;
    }cout<<"\n";
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    string str[]={"Hello","Guru","Prema","kosamey","ra","Jeevitham"};
    printArray(str,6," ");
    int n=sizeof(arr)/sizeof(arr[0]);int end=n-1;
    int start=0;
    printArray(arr,n," ");
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    printArray(arr,n," ");

}