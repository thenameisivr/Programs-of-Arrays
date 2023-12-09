#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[10];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int m;
  cin>>m;
  bool flag = false;
  for(int i=0;i<n;i++){
    if(arr[i]==m){
      flag = true;
    }
  }
  if(flag==true){
    cout<<"Element Found";
  }
  else{
    cout<<"Element not found";
  }
}