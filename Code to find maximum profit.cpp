#include <iostream>
#include<climits>
using namespace std;
int main() {
  int arr[10] = {7,1,5,3,6,4};
  int small = INT_MAX;
  int first = 0;
  int second = 0;
  for(int i=0;i<6;i++){
    if(arr[i]<small){
      small = arr[i];
    }

    first = arr[i];
    if(first-small>second){
      second = first;
    }
  }
  cout<<second;
  return 0;
}