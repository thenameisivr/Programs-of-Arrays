#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int arr[10];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int left = 0;
  int right = n-1;
  while(left<=right){
    swap(arr[left],arr[right]);
    left++;
    right--;
  }
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}