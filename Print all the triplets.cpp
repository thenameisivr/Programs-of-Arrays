#include <iostream>
using namespace std;

int main() {
 
  int n;
  cin>>n;
  int arr[10];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
      }
    }
  }


}