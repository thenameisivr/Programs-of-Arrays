#include<iostream>
#include<climits>
using namespace std;
int main(){
  int n;
  cin>>n;
  int m;
  cin>>m;
  int arr[10][10];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }

  int sum,sum2 = INT_MIN,sum3 = 0;

  
    for(int i=0;i<n;i++){
      sum = 0;
      for(int j=0;j<m;j++){
        sum+=arr[i][j];
      }
      if(sum>sum2){
        sum2 = sum;
        sum3 = i;
      }
    }
  cout<<sum2<<" "<<sum3;
  














  
}