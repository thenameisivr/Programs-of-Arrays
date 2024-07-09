#include<iostream>
using namespace std;
int main()
{
  int arr[6] = {1,2,3,4,5,6};
  
  int size = 6;
  int brr[size];
  int k = 3;

  for(int i=0;i<size;i++){
    int index = (i+k)%size;
    brr[index] = arr[i];
  }
  for(int i=0;i<size;i++){
    cout<<brr[i]<<" ";
  }
  
}