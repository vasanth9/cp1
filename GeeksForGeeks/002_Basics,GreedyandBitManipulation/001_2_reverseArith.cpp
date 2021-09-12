#include<bits/stdc++.h>
using namespace std;
int reversed_squared_sum(int arr[],int n){
    int sum=0,x=0;
    for(int i=n-1;i>=0;i--)
    {
       x%2==0?sum+=(arr[i]*arr[i]):sum-=(arr[i]*arr[i]);x++;
    }
    return sum;
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
    cout<<reversed_squared_sum(arr,n)<<"\n";
    }

}
















/*

https://practice.geeksforgeeks.org/problems/reverse-squared-sum/0/

Reena had been given an array arr[] of positive integers of size N.Help her to find the value A.

A = arr[n]*arr[n] - arr[n-1]*arr[n-1] + arr[n-2]*arr[n-2] - ......... upto index 1

Input:
1. The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
2. The first line of each test case contains a single integer N.
3. The second line contains N space-separated positive integers represents array arr.

Output: For each test case, print the value of A in a single line

Constraints:
1. 1 <= T <= 10
2. 1 <= N <= 100000
3. 1 <= arr[i] <= 100

Example:
Input:
2
3
1 2 3
4
4 8 1 2

Output:
6
51

Explanation:
Test case 1 : 3*3 - 2*2 + 1*1 = 6 */