#include<iostream>
using namespace std;
int main(){
  int n;
  int m;
  cin>>n;
  cin>>m;
  int arr[10][10];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
  }
}
  int sum = 0;
  for(int i=0;i<n;i++){
    
    for(int j=0;j<m;j++){
      if(i==j){
        sum+=arr[i][j];
      }
    }
    cout<<sum<<endl;
  }







  

}