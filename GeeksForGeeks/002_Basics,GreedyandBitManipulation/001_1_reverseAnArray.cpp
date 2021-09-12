#include<bits/stdc++.h>
using namespace std;
template<class T>
void printArray(T arr[],int n,string space){
    for(int i=0;i<n;i++ ){
        cout<<arr[i]<<space;
    }cout<<"\n";
}
int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       int start=0,end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    printArray(arr,n," ");}

}











/*

https://practice.geeksforgeeks.org/problems/reverse-an-array/0

Given an array A of size N, print the reverse of it.

Input:
First line contains an integer denoting the test cases 'T'. T testcases follow. Each testcase contains two lines of input. First line contains N the size of the array A. The second line contains the elements of the array.

Output:
For each testcase, in a new line, print the array in reverse order.

Constraints:
1 <= T <= 100
1 <= N <=100
0 <= Ai <= 100

Example:
Input:
1
4
1 2 3 4
Output:
4 3 2 1
*/