#include<iostream>
using namespace std;
int main(){
  int n;
  int arr[10];
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int temp = arr[n-1];
  for(int i = n-1;i>0;i--){
    arr[i] = arr[i-1];
    // cout<<arr[i]<<" ";
  }
  arr[0] = temp;
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}