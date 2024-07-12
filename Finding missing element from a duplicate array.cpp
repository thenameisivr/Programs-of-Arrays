#include<iostream>
using namespace std;
void findmissing(int arr[],int n){
  for(int i=0;i<n;i++){
    int index = abs(arr[i]);
    if(arr[index]>0){
      arr[index]*=-1;
    }
  }
  int ans = 0;
  for(int i=0;i<n;i++){
    if(arr[i]>0){
      ans+=i;
    }
  }
  cout<<ans<<endl;
}
int main(){
  int arr[10] = {1,3,5,3,4};
  int n = sizeof(arr)/sizeof(int);
  findmissing(arr,n);

}