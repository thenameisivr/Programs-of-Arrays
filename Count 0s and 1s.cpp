#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[10];
  int zero =0,one = 0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==0){
      zero++;
    }
    else if(arr[i]==1){
      one++;
    }
    else{
      continue;
    }
  }
  cout<<one<<" "<<zero;

}