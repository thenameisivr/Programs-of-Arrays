#include <iostream>
using namespace std;

int main() {

  int n;
  cin>>n;
  int m;
  cin>>m;
  int arr[10];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int left = 0;
  int right = n-1;
  bool flag = false;
  int csum = 0;
  while(left<right){
    csum = arr[left]+arr[right];
    if(csum==m){
      flag = true;
      break;
    }
    else if(csum>m){
      right--;
    }
    else{
      left++;
    }
  }
  if(flag==true){
    cout<<"Sum is available";
  }
  else{
    cout<<"Sum is not available";
  }


  return 0;
}