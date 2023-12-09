#include<iostream>
#include<climits>
using namespace std;
int findsmall(int arr[10],int n){
  int s = INT_MAX;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]<s){
      s=arr[i];
    }
  }
  return s;

}
int main(){
  int n;
  cin>>n;
  int arr[10];
  int ans = findsmall(arr,n);
  cout<<ans<<" ";

}