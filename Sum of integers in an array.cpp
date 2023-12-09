#include <iostream>
using namespace std;
int add(int arr[],int m){
int sum = 0;
for(int i=0;i<m;i++){
  cin>>arr[i];
  sum+=arr[i];
}
return sum;
}
int main() {
  int n;
  cin>>n;
  int arr[10];
  int ans = add(arr,n);
  cout<<ans<<" ";
}