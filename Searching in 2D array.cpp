#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  int m;
  cin>>m;
  int arr[10][10];
  for(int i=0;i<n;i++){
    for(int j = 0;j<m;j++){
      cin>>arr[i][j];
    }
  }
  int target = 2;
  bool flag = false;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(arr[i][j] == target){
        flag = true;
      }
    }
  }
  if(flag==true){
    cout<<"Found";
  }
  else{
    cout<<"Not found";
  }
  return 0;
}